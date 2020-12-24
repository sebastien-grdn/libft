/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sg9031 <sg9031@gmail.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 10:48:25 by sg9031            #+#    #+#             */
/*   Updated: 2020/12/24 10:57:17 by sg9031           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list* new;

    if (!(new = (t_list *)malloc(sizeof(new))))
        return (NULL);
    new->content = content;
    new->next = NULL;
    return (new);
}