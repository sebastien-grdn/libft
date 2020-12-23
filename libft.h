/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sg9031 <sg9031@gmail.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 17:36:23 by sg9031            #+#    #+#             */
/*   Updated: 2020/12/23 09:52:51 by sg9031           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H
# include <string.h>
# include <stdlib.h>
int	ft_strlen(const char *str);
void* ft_memset(void *b, int c, size_t len);
void* ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
int ft_isprint(int c);
int ft_isdigit(int c);
void ft_bzero(void *s, size_t n);

#endif
