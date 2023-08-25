/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:46:46 by hecmarti          #+#    #+#             */
/*   Updated: 2023/08/21 11:49:33 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	*ft_memset(void *b, int c, size_t n)
{
	size_t			count;
	unsigned char	*tmp;

	count = 0;
	tmp = (unsigned char *)b;
	if (b)
	{
		while (count < n)
		{
			tmp[count] = (unsigned char)c;
			count++;
		}
	}
	return (b);
}
/*
int	main(void)
{
	char	b;

	b[] = "This is a string";
	ft_memset(b, 's', 7);
	printf("%s\n", b);
}
look about having 2 inputs at the second input at funtion
*/
