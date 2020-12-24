/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sg9031 <sg9031@gmail.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 11:16:30 by sg9031            #+#    #+#             */
/*   Updated: 2020/12/24 11:24:12 by sg9031           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void ft_lstadd_back(t_list **alst, t_list *new)
{
    t_list* lst;

    if (!*alst || !new)
    {
        *alst = new;
        return;
    }
    lst = *alst;
    while (lst->next)
        lst = lst->next;
    lst->next = new;
}