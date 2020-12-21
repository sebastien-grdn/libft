/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sg9031 <sg9031@gmail.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 12:20:42 by sg9031            #+#    #+#             */
/*   Updated: 2020/12/21 15:14:36 by sg9031           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void* ft_memmove(void *dst, const void *src, size_t len)
{
    char* x;
    char* y;

    if (dst == NULL && src == NULL)
        return (dst);
    x = (char *) src;
    y = (char *) dst;
    if (x < y)
    {
        x += len;
        y += len;
        while (len--)
            *--y = *--x;
    } else if (x != y)
        ft_memcpy(y, x, len);
    return (dst);
}