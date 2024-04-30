/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:34:03 by timschmi          #+#    #+#             */
/*   Updated: 2024/04/19 13:00:34 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int hex)
{
	int				len;
	char			*arr;
	int				i;

	i = 1;
	len = ft_hexlen(hex);
	arr = (char *)malloc(len + 1 * sizeof(char));
	if (arr == NULL)
		return (-1);
	arr[len] = '\0';
	len -= 1;
	while (len >= 0)
	{
		i = hex % 16;
		hex /= 16;
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

int	ft_putupperhex(unsigned int hex)
{
	int				len;
	char			*arr;
	int				i;

	i = 1;
	len = ft_hexlen(hex);
	arr = (char *)malloc(len + 1 * sizeof(char));
	if (arr == NULL)
		return (-1);
	arr[len] = '\0';
	len -= 1;
	while (len >= 0)
	{
		i = hex % 16;
		hex /= 16;
		if (i < 10)
			arr[len] = i + '0';
		else if (i >= 10 && i <= 15)
			arr[len] = i + 55;
		len--;
	}
	len = ft_putstr(arr);
	free(arr);
	return (len);
}

// int main(void)
// {
// 	int i = -10;
// 	printf("Return Value: %d\n", ft_puthex(i));
// 	printf("Return Value: %d\n", printf("%x", i));

// }