/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:20:47 by hecmarti          #+#    #+#             */
/*   Updated: 2022/12/12 18:12:45 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strlen(char *a)
{
	int	count;

	count = 0;
	while (a[count])
	{
		count++;
	}
	return (count);
}

/*
int	main(void)
{
	char	*a;

	a = "Para ver que sabes hacerlo";
	printf("%d\n", ft_strlen(a));
}
*/