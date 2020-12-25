/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sg9031 <sg9031@gmail.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 17:32:58 by sg9031            #+#    #+#             */
/*   Updated: 2020/12/25 14:45:50 by sg9031           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	size_t			dest_len;
	size_t			src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	j = 0;
	while (dest[i])
		i++;
	if (size <= i)
		return (size + src_len);
	while (i < size - 1 && src[j])
		dest[i++] = src[j++];
	if (size > 0)
		dest[i] = '\0';
	while (src[j])
		j++;
	return (src_len + dest_len);
}
