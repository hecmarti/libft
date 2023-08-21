/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:33:58 by hecmarti          #+#    #+#             */
/*   Updated: 2023/08/01 10:05:01 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_atoi(const char *str)
{
	int	count;
	int	val;
	int	aux;

	val = 1;
	count = 0;
	while ((str[count] >= 9) && (str[count] <= 13))
		count++;
	if ((str[count] == 45) || (str[count] == 43))
	{
		if ((str[count] == 45))
			val = val * -1;
		count++;
	}
	while ((str[count] >= '0') && (str[count] <= '9'))
	{
		aux = (aux * 10) + (str[count] - '0');
		count++;
	}
	return (aux *= val);
}

int	main(void)
{
	const char	str[] = "123";

	printf("%d\n", ft_atoi(str));
}
