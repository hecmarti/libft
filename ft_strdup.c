/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:12:14 by hecmarti          #+#    #+#             */
/*   Updated: 2023/07/13 09:44:37 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include"libft.h"

char	*ft_strdup(const char *s)
{
	size_t len;
	char *copy;

	len = strlen(s) + 1;
	copy = (char *)malloc(len);
	if (copy == NULL)
		return NULL;
	else
		ft_memcpy(copy, s, len);
	return copy;
}

int main(void)
{
    const char *original = "Hello, world!";
    char *duplicate = ft_strdup(original);

    if (duplicate != NULL)
    {
        printf("Cadena duplicada: %s\n", duplicate);
        free(duplicate);
    }
    else
    {
        printf("Error al duplicar la cadena.\n");
    }

    return 0;
}
