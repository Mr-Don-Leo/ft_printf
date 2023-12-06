/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabayan <mbabayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:46:32 by mbabayan          #+#    #+#             */
/*   Updated: 2023/12/05 18:46:35 by mbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	output_pointer(va_list arguments)
{
	int printed_count;
	size_t number;

	number = va_arg(arguments, unsigned long);
	ft_putstr("0x");
	printed_count = 2;
	printed_count += ft_puthex(number, 'x');
	return (printed_count);
}