/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sg9031 <sg9031@gmail.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 11:43:30 by sg9031            #+#    #+#             */
/*   Updated: 2020/12/27 15:17:01 by sg9031           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(
	void *dst, const void *src, int c, size_t n
)
{
	size_t			i;
	unsigned char	*x;
	unsigned char	*y;

	if (!dst && !src)
		return (dst);
	x = (unsigned char *)src;
	y = (unsigned char *)dst;
	i = -1;
	while (++i < n && x[i] != (unsigned char)c)
	{
		y[i] = (unsigned char)x[i];
	}
	if (x[i] == (unsigned char)c)
	{
		y[i] = (unsigned char)x[i];
		return (&dst[i + 1]);
	}
	return (NULL);
}
