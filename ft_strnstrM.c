/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstrM.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:51:11 by hecmarti          #+#    #+#             */
/*   Updated: 2022/12/01 19:45:00 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	int	count1;
	int	count2;
	int	result;
	int	len1;

	count1 = 0;
	count2 = 0;
	len1 = ft_strlen(str1);
	while (str1[count1])
	{
		while (str1[count1] == str2[count2])
		{
			while (len1 < len)
			{
				result = count1;
				if (count1 == len1)
					return (result);
			}
		}
		count1++;
		count2 = 0;
	}
	result = -1;
	return (result);
}

int	main(void)
{
	const char	*str1;
	const char	*str2;
	size_t		len;

	str1 = "Hola";
	str2 = "la";
	len = '5';
	printf("%d", ft_strnstr(str1, str2, len));
}
/*
TODO
TOFIX

extensiones -chrome.
consent-o-matic 
add blocker

Usage of data structures it is a must ! asap ! 

typedef struct s_type
{
	void *ptr;
	int number;
}              t_type;

variable static it's not the same as static function !!

static size_t ft_strlen(size_t num, char *s) 
// can be called only inside same .c 

.h heder with 
*/
