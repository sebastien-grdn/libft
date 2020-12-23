/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sg9031 <sg9031@gmail.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 20:31:10 by sg9031            #+#    #+#             */
/*   Updated: 2020/12/23 09:59:40 by sg9031           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void* ft_calloc(size_t count, size_t size)
{
    void* dst;

    if (!count || !size)
    {

        count = 1;
        size = 1;
    }
    dst = malloc(count * size);
    if (!dst)
        return (NULL);
    ft_bzero(dst, count * size);
    return (dst);
}