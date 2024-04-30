/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:02:44 by timschmi          #+#    #+#             */
/*   Updated: 2024/04/19 12:55:47 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexlen(unsigned long int hex)
{
	int	len;

	len = 0;
	if (hex == 0)
		return (1);
	while (hex > 0)
	{
		hex /= 16;
		len++;
	}
	return (len);
}

int	ft_putptrhex(long long int hex)
{
	int					len;
	char				*arr;
	int					i;
	unsigned long int	uhex;

	i = 1;
	uhex = (unsigned long int)hex;
	len = ft_hexlen(uhex) -1;
	arr = (char *)malloc(len + 2 * sizeof(char));
	if (arr == NULL)
		return (-1);
	arr[len +1] = '\0';
	while (len >= 0)
	{
		i = uhex % 16;
		uhex /= 16;
		if (i < 10)
			arr[len] = i + '0';
		else if (i >= 10 && i <= 15)
			arr[len] = i + 87;
		len--;
	}
	len = ft_putstr(arr);
	free(arr);
	return (len);
}

int	ft_putptr(void *ptr)
{
	unsigned long int	i;
	int					len;

	i = (unsigned long int)ptr;
	if (write(1, "0x", 2) == -1)
		return (-1);
	len = ft_putptrhex(i);
	if (len == -1)
		return (-1);
	else
		return (len + 2);
}

// int main(void)
// {
// 	int i;

// 	i = 0;
// 	printf("%d\n", ft_putptr(""));
// }