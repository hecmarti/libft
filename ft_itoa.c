/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:58:50 by hecmarti          #+#    #+#             */
/*   Updated: 2023/08/21 10:52:02 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	get_num_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
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
	char	*str;
	int		sign;

	len = get_num_len(n);
	sign = 1;
	if (n < 0)
	{
		n = -n;
		sign = -1;
	}
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (n == 0)
		str[0] = '0';
	while (n)
	{
		str[len--] = '0' + (n % 10) * sign;
		n /= 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}

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