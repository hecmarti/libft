/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:43:47 by hecmarti          #+#    #+#             */
/*   Updated: 2023/06/07 12:22:51 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include"libft.h"
/*
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t		len1;
	size_t		len2;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (s1 && s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	while (i < len1)
	{
		new[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		new[i + j] = s2[j];
		j++;
	}
	new[i + j] = 0;
	return (new);
}
*/
/*
int	ft_strlen(char const *a)
{
	int	count;

	count = 0;
	while (a[count])
	{
		count++;
	}
	return (count);
}
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	new = malloc(sizeof (char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (new == NULL)
		return (NULL);
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}

	while (s2[j])
	{
		new[i + j] = s2[j];
		j++;
	}

	new[i + j] = '\0';
	return (new);
}

int main(void)
{
	char const	b[] = "mas";
	char const	a[] = "Trigonometria";

	printf("%s", ft_strjoin(b, a));
}