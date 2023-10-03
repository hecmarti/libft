/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:13:00 by hecmarti          #+#    #+#             */
/*   Updated: 2023/09/01 11:03:48 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (dst < src)
	{
		while (len--)
			*d++ = *s++;
	}
	else if (dst > src)
	{
		d += len;
		s += len;
		while (len--)
			*(--d) = *(--s);
	}
	return (dst);
}

/*
int	main(void)
{
	char	dest[] = "oldstring";
	const char	src[] = "newstrang";
	size_t	n = 9; 

	printf("Before memmove dest = %s, src = %s\n", dest, src);
	ft_memmove(dest, src, n);
	printf("After memmove dest = %s, src = %s\n", dest, src);
}
*/