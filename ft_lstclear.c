/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:13:26 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/08 18:11:41 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void ft_lstclear(t_list **lst, void (*del)(void*))
{
    while(lst)
    {
        while(*lst != NULL)
        {
            del(lst->content);
            free(*lst);
        }
        lst = lst->next;
    }
}
*/