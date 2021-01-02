/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sg9031 <sg9031@gmail.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 15:40:40 by sg9031            #+#    #+#             */
/*   Updated: 2021/01/02 22:26:48 by sg9031           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cs1;
	unsigned char	*cs2;

	cs1 = (unsigned char*)s1 - 1;
	cs2 = (unsigned char*)s2 - 1;
	if (!n)
		return (0);
	while (*++cs1 == *++cs2 && --n)
		;
	return (*cs1 - *cs2);
}
