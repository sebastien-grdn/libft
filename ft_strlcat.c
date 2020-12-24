/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sg9031 <sg9031@gmail.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 17:32:58 by sg9031            #+#    #+#             */
/*   Updated: 2020/12/24 19:42:55 by sg9031           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	const int		dest_len = ft_strlen(dest);
	const int		src_len = ft_strlen(src);

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
