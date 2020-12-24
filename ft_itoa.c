/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sg9031 <sg9031@gmail.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 13:25:52 by sg9031            #+#    #+#             */
/*   Updated: 2020/12/24 18:48:54 by sg9031           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int				size;
	unsigned int	x;
	char			*str;
	int				sign;

	size = 1;
	if (n < 0)
	{
		sign = -1;
		size += 1;
	}
	else
		sign = 1;
	x = sign * n;
	while ((x /= 10) > 0)
		size += 1;
	if (!(str = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	str[size--] = '\0';
	x = sign * n;
	if (x == 0)
		str[0] = '0';
	else if (sign < 0)
		str[0] = '-';
	while (x)
	{
		str[size--] = (x % 10) + 48;
		x /= 10;
	}
	return (str);
}
