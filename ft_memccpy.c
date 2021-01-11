/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sg9031 <sg9031@gmail.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 11:43:30 by sg9031            #+#    #+#             */
/*   Updated: 2021/01/11 22:57:50 by sg9031           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


void	*ft_memccpy(
	void *dst, const void *src, int c, size_t n
)
{
	size_t			i;
	unsigned char	*x;
	unsigned char	*y;

	x = (unsigned char *)src;
	y = (unsigned char *)dst;
	i = 0;
	while (i < n && x[i] != (unsigned char)c)
	{
		y[i] = (unsigned char)x[i];
		i++;
	}
	if (i == n)
		return (NULL);
	y[i] = (unsigned char)c;
	return (&dst[i + 1]);
}
