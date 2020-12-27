/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sg9031 <sg9031@gmail.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 11:20:01 by sg9031            #+#    #+#             */
/*   Updated: 2020/12/27 15:17:09 by sg9031           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*x;
	char	*y;

	if (!dst && !src)
		return (dst);
	x = (char *)src;
	y = (char *)dst;
	i = -1;
	while (++i < n)
	{
		y[i] = x[i];
	}
	return (dst);
}
