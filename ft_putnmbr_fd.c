/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnmbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:07:01 by hecmarti          #+#    #+#             */
/*   Updated: 2023/08/01 10:33:24 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnmbr_fd(int n, int fd)
{
	int t;
	size_t c;

	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	t = n;
	c = 1;
	while ((t /= 10) > 0)
		c *= 10;
	while (c > 0)
	{
		ft_putchar_fd((n / c) + '0', fd);
		n %= c;
		c /= 10;
	}
}

int	main(void) {
	long int	t;
	int fd;

	fd = 1;
	t = 100;
	if (t < 0)
	{
		t *= -1;
		ft_putchar_fd('-', fd);
	}
	if (t > 9)
	{
		ft_putnbr_fd((t / 10), fd);
		ft_putchar_fd((t % 10 + '0'), fd);
	}
	else
		ft_putchar_fd((t + '0'), fd);
}