/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 09:40:05 by hecmarti          #+#    #+#             */
/*   Updated: 2023/10/17 18:33:40 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(void **ss)
{
	size_t	i;

	i = 0;
	while (ss[i])
	{
		free(ss[i]);
		i++;
	}
	free(ss);
}

static int	ft_countwords(const char	*s, char c)
{
	int		n_words;
	int		i;

	i = 0;
	n_words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			n_words++;
		while (s[i] != c && s[i])
			i++;
	}
	return (n_words);
}

static char	**ft_build_split(const char *s, char c)
{
	char	**split;
	int		i;
	int		j;
	int		start;
	int		length;

	i = -1;
	j = 0;
	start = -1;
	length = ft_strlen(s);
	split = (char **) malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (!split || sizeof(split) == 0)
		return (NULL);
	while (++i <= length)
	{
		if (s[i] != c && start < 0)
			start = i;
		else if (start >= 0 && (s[i] == c || i == length))
		{
			split[j] = ft_substr(s, start, i - start);
			if (!split[j])
			{
				ft_free((void **)split);
				return (NULL);
			}
			start = -1;
			j++;
		}
	}
	split[j] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	if (!s)
		return (NULL);
	return (ft_build_split(s, c));
}

/*int	main(void)
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
