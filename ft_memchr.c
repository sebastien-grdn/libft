/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sg9031 <sg9031@gmail.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 15:18:02 by sg9031            #+#    #+#             */
/*   Updated: 2020/12/24 19:25:34 by sg9031           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *x;

	x = (unsigned char *)s;
	while (n--)
	{
		if (*x == (unsigned char)c)
			return ((void *)x);
		x++;
	}
	return (NULL);
}
