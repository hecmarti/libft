/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:19:18 by hecmarti          #+#    #+#             */
/*   Updated: 2022/11/28 12:25:22 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_isascii(int a)
{
	if ((a >= 0) && (a <= 127))
	{
		return (1);
	}
	return (0);
}

int	main(void)
{
	int	a;

	a = 'r';
	printf("%d", ft_isascii(a));
}
