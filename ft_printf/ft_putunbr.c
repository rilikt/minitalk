/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:03:25 by timschmi          #+#    #+#             */
/*   Updated: 2024/04/19 13:03:18 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int i)
{
	int	len;

	len = ft_nbrlen(i);
	if (i < 10)
	{
		if (ft_putchar(i + '0') == -1)
			return (-1);
	}
	else
	{
		if (ft_putunbr(i / 10) == -1)
			return (-1);
		if (ft_putchar(i % 10 + '0') == -1)
			return (-1);
	}
	return (len);
}

// int main(void)
// {
// 	int i = -10;
// 	printf("%d\n", ft_putunbr(i));
// }