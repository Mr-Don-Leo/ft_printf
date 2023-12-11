/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabayan <mbabayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 22:35:18 by mbabayan          #+#    #+#             */
/*   Updated: 2023/12/05 18:25:48 by mbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
 * Calling write function with file descriptor,
 * string pointer, and string length
 */
void	ft_putstr(char *string)
{
	int	index;

	index = 0;
	while (string[index])
	{
		write(1, &string[index], 1);
		index++;
	}
}
