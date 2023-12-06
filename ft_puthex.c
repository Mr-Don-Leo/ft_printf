/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabayan <mbabayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:53:31 by mbabayan          #+#    #+#             */
/*   Updated: 2023/12/05 18:53:41 by mbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_puthex(int number, char base)
{
	int		printed_count;
	char	*hex_number;

	printed_count = 0;
	if (base == 'x')
		hex_number = "0123456789abcdef";
	if (base == 'X')
		hex_number = "0123456789ABCDEF";
	if (number >= 16)
		printed_count += ft_puthex(number / 16, base);
	ft_putchar(hex_number[number % 16]);
	return (printed_count);

}