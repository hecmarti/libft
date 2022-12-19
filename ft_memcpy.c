/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpyM.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:32:19 by hecmarti          #+#    #+#             */
/*   Updated: 2022/12/07 16:14:00 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		count;
	char		*i;
	const char	*ii;

	i = (char *)dst;
	ii = (const char *)src;
	count = 0;
	if (!dst && !src)
		return (0);
	while (count < n)
	{
		i[count] = ii[count];
		count++;
	}
	return (dst);
}

int	main(void)
{
	size_t		n = 7;
	char		dst[7];
	const char	src[] = "Pello";

	printf("%s", ft_memcpy(dst, src, n));
}
