/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:58:50 by hecmarti          #+#    #+#             */
/*   Updated: 2023/10/16 13:59:25 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static size_t	ft_numsize(int n)
{
	size_t	size;

	size = 0;
	if (n < 0)
	{
		size++;
		n = -n;
	}
	if (n == 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static char	*ft_min_value(char	*itoa)
{
	ft_strlcpy(itoa, "-2147483648", 12);
	return (itoa);
}

char	*ft_itoa(int n)
{
	char	*itoa;
	size_t	numsize;
	int		aux_n;

	aux_n = n;
	numsize = ft_numsize(n);
	itoa = (char *)malloc(sizeof(char) * numsize + 1);
	if (!itoa)
		return (NULL);
	if (n == -2147483648)
		return (ft_min_value(itoa));
	itoa[numsize--] = '\0';
	if (n < 0)
	{
		n = -n;
		itoa[0] = '-';
	}
	while (numsize > 0)
	{
		itoa[numsize--] = (n % 10) + '0';
		n = n / 10;
	}
	if (aux_n >= 0)
		itoa[numsize] = n + '0';
	return (itoa);
}
/*static int	get_num_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*str;

	len = get_num_len(n);
	sign = 1;
	if (n < 0)
	{
		sign = -1;
		len++;
	}
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	else
	{
		while (n)
		{
			str[--len] = '0' + (n % 10) * sign;
			n /= 10;
		}
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}*/

/*
int	main(void)
{
	int number = -12345;
	char *result = ft_itoa(number);

	if (result != NULL)
		printf("Número: %d, Cadena: %s\n", number, result);
	else
		printf("Error al convertir el número.\n");

	free(result);

	return (0);
}
*/