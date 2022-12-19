/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecmarti <hecmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:18:33 by hecmarti          #+#    #+#             */
/*   Updated: 2022/12/05 17:00:53 by hecmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					l_list;

void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int a);
int		ft_isalpha(int a);
int		ft_isascii(int a);
int		ft_isdigit(int a);
int		ft_isprint(int a);
void	*ft_memset(void *str, int c, size_t n);
char	*ft_strchr(const char *str, int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
int		ft_strlen(char *a);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
int		ft_strnstr(const char *str1, const char *str2, size_t len);
char	*strrchr(const char *str, int c);
int		ft_tolower(int a);
int		ft_toupper(int c);
#endif