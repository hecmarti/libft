/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:23:58 by hecmarti          #+#    #+#             */
/*   Updated: 2023/08/21 10:20:51 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t			total_size;
	void			*ptr;
	unsigned char	*byte_ptr;
	size_t			i;

	i = 0;
	total_size = count * size;
	ptr = malloc(total_size);
	if (ptr != NULL)
	{
		byte_ptr = (unsigned char *)ptr;
		while (i < total_size)
		{
			if (i < total_size)
				byte_ptr[i] = 0;
			i++;
		}
	}
	return (ptr);
}

/*
int	main(void)
{
	size_t num_elements = 5;
	size_t element_size = sizeof(int);
	int *arr = (int *)ft_calloc(num_elements, element_size);

	if (arr != NULL)
	{
		printf("Se asignó memoria exitosamente.\n");

		printf("Elementos del arreglo:\n");
		for (size_t i = 0; i < num_elements; i++)
		{
			printf("%d ", arr[i]);
		}
		printf("\n");

		free(arr);
	}
	else
	{
		printf("Error al asignar memoria.\n");
	}

	return 0;
}
*/
