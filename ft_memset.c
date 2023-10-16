/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:46:46 by hecmarti          #+#    #+#             */
/*   Updated: 2023/10/16 14:46:31 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*dest;

	dest = str;
	i = 0;
	while (i < n)
	{
		dest[i] = c;
		i++;
	}
	return (str);
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
