/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sg9031 <sg9031@gmail.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 11:53:24 by sg9031            #+#    #+#             */
/*   Updated: 2020/12/23 12:55:14 by sg9031           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    int size;

    if (!s1 || !set)
        return (NULL);
    while (*s1 && ft_strchr(set, *s1))
        s1++;
    size = ft_strlen(s1);
    while (size && ft_strchr(set, s1[size]))
        size--;
    return (ft_substr(s1, 0, size + 1));
}
