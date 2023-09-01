/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 09:40:05 by hecmarti          #+#    #+#             */
/*   Updated: 2023/09/01 10:15:51 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	count_words(const char *str, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (*str != c)
		{
			if (!in_word)
			{
				count++;
				in_word = 1;
			}
		}
		else
		{
			in_word = 0;
		}
		str++;
	}
	return (count);
}

static void	fill_split(char const *s, char c, char **split)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	start = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (start != i)
				split[j++] = ft_substr(s, start, i - start);
			start = i + 1;
		}
		i++;
	}
	if (start != i)
		split[j++] = ft_substr(s, start, i - start);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	fill_split(s, c, split);
	split[count_words(s, c)] = NULL;
	return (split);
}

/*
int	main(void)
{
	const char *str = "Split,,this,string,using,,comma,,,";
	char c = ',';

	char **split = ft_split(str, c);
	if (split != NULL)
	{
		int i = 0;
		while (split[i] != NULL)
		{
			printf("Split[%d]: %s\n", i, split[i]);
			free(split[i]);
			i++;
		}
		free(split);
	}
	else
	{
		printf("Error al dividir la cadena.\n");
	}

	return (0);
}
*/
