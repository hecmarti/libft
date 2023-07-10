/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:20:47 by hecmarti          #+#    #+#             */
/*   Updated: 2023/06/12 12:33:29 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"libft.h"

size_t	ft_strlen(char const *a)
{
	int	count;

	count = 0;
	while (a[count] != '\0')
		count++;
	return (count);
}

/*
int	main(void)
{
	char	*a;

	a = "Hola";
	printf("%zu\n", ft_strlen(a));
}*/