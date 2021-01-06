/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sg9031 <sg9031@gmail.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 12:56:23 by sg9031            #+#    #+#             */
/*   Updated: 2021/01/06 16:01:03 by sg9031           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		add_slice(char **list, int list_index, char *str, int size)
{
	int		i;
	char	*slice;

	if (!(slice = malloc(sizeof(char) * (size + 1))))
	{
		list = NULL;
		return ;
	}
	i = 0;
	while (i < size)
	{
		slice[i] = str[i];
		i++;
	}
	slice[i] = '\0';
	list[list_index] = slice;
}

static char		**fill_list(char *str, char c, char **list)
{
	int i;
	int list_index;
	int string_begins;

	i = 0;
	string_begins = 0;
	list_index = 0;
	while (str[i] && list)
	{
		if (str[i] == c)
		{
			if (i && string_begins != i)
				add_slice(list, list_index++, &str[string_begins],
					i - string_begins);
			string_begins = i + 1;
		}
		i++;
	}
	if (string_begins != i && list)
		add_slice(list, list_index, &str[string_begins], i - string_begins);
	return (list);
}

static int		get_list_size(char *str, char c)
{
	int i;
	int x;
	int list_size;

	list_size = 0;
	x = 0;
	i = -1;
	while (str[++i])
	{
		if (str[i] == c)
		{
			if (x)
				list_size += 1;
			x = 0;
		}
		else
			x++;
	}
	if (x)
		list_size++;
	return (list_size);
}

char			**ft_split(char const *s, char c)
{
	int		list_size;
	char	**list;

	if (!s)
		return (NULL);
	list_size = get_list_size((char *)s, c);
	if (!(list = malloc(sizeof(void*) * (list_size + 1))))
		return (NULL);
	fill_list((char *)s, c, list);
	list[list_size] = 0;
	return (list);
}
