/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sg9031 <sg9031@gmail.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 17:36:23 by sg9031            #+#    #+#             */
/*   Updated: 2020/12/24 15:01:26 by sg9031           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef	struct	s_list
{
	void			*content;
	struct s_list	*next;
}                   t_list;

int	ft_strlen(const char *str);
void* ft_memset(void *b, int c, size_t len);
void* ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
int ft_isprint(int c);
int ft_isdigit(int c);
void ft_bzero(void *s, size_t n);
size_t ft_strlcpy(char * dst, const char * src, size_t dstsize);
char* ft_strchr(const char *s, int c);
char *ft_substr(char const *s, unsigned int start, size_t len);
void ft_putstr_fd(char *s, int fd);
void ft_putchar_fd(char c, int fd);
char *ft_itoa(int n);
void ft_lstdelone(t_list *lst, void (*del)(void *));
t_list *ft_lstnew(void *content);
void ft_lstclear(t_list **lst, void (*del)(void *));

#endif
