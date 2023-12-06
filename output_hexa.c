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

int	output_hexa(va_list arguments, char base)
{
	int printed_count;
	int number;

	number = va_arg(arguments, unsigned int);
	printed_count = ft_puthex(number, base);
	return (printed_count);
}