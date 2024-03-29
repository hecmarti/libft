/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:33:58 by hecmarti          #+#    #+#             */
/*   Updated: 2023/10/18 14:59:09 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_atoi(const char *str)
{
	int	count;
	int	val;
	int	aux;

	count = 0;
	val = 1;
	aux = 0;
	while (str[count] == ' ' || (str[count] >= 9 && str[count] <= 13))
		count++;
	if (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
			val = -1;
		count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		aux = aux * 10 + (str[count] - '0');
		count++;
	}
	return (aux * val);
}

/*
int	main(void)
{
	const char	str[] = "123";

	printf("%d\n", ft_atoi(str));
}
*/