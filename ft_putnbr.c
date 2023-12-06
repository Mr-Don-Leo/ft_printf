/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabayan <mbabayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 23:18:30 by mbabayan          #+#    #+#             */
/*   Updated: 2023/12/05 17:27:54 by mbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int number)
{
	int	index;

	index = 1;
	if (number == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (number < 0)
	{
		write(1, "-", 1);
		index++;
		number = -number;
	}
	if (number > 9)
		index += ft_putnbr(number / 10);
	ft_putchar(number % 10 + '0');
	return (index);
}
