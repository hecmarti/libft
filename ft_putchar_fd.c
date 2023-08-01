/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:00:46 by hecmarti          #+#    #+#             */
/*   Updated: 2023/07/19 10:33:01 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar_fd (char c, int fd) {
	write(fd, &c, 1);
}

int main(void) {
	ft_putchar_fd('H', 2);
}