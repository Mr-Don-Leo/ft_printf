/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_hexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabayan <mbabayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:27:30 by mbabayan          #+#    #+#             */
/*   Updated: 2023/12/05 18:27:35 by mbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	puthexa(unsigned int number, char base)
{
	int		count;
	char	*hex;

	count = 1;
	if (base == 'X')
		hex = "0123456789ABCDEF";
	if (base == 'x')
		hex = "0123456789abcdef";
	if (number > 15)
		count += puthexa(number / 16, base);
	ft_putchar(hex[number % 16]);
	return (count);
}

int	output_hexa(va_list arguments, char base)
{
	int printed_count;
	int number;

	number = va_arg(arguments, unsigned int);
	printed_count = puthexa(number, base);
	return (printed_count);
}