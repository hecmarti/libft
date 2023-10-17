/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 09:40:05 by hecmarti          #+#    #+#             */
/*   Updated: 2023/10/17 19:19:20 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_free(void **ss)
{
	size_t	i;

	i = 0;
	while (ss[i])
	{
		free(ss[i]);
		i++;
	}
	free(ss);
	return (NULL);
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
	int		i[3];

	i[0] = -1;
	i[1] = 0;
	i[2] = -1;
	split = (char **) malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (!split || sizeof(split) == 0)
		return (NULL);
	while (++i[0] <= (int)ft_strlen(s))
	{
		if (s[i[0]] != c && i[2] < 0)
			i[2] = i[0];
		else if (i[2] >= 0 && (s[i[0]] == c || i[0] == (int)ft_strlen(s)))
		{
			split[i[1]] = ft_substr(s, i[2], i[0] - i[2]);
			if (!split[i[1]])
				return ((char **)ft_free((void **)split));
			i[2] = -1;
			i[1]++;
		}
	}
	split[i[1]] = NULL;
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
