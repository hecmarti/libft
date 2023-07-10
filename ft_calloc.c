/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:23:58 by hecmarti          #+#    #+#             */
/*   Updated: 2023/07/10 11:44:36 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t total_size = count * size;
	void *ptr = malloc(total_size);

	if (ptr != NULL)
	{
		unsigned char *byte_ptr = (unsigned char *)ptr;
		for (size_t i = 0; i < total_size; i++)
		{
			byte_ptr[i] = 0;
		}
	}

	return ptr;
}

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
