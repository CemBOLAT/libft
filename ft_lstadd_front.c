/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:57:53 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/15 01:41:22 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	else if (lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
/*
int main()
{
    t_list  **lst;
    lst = malloc(sizeof(t_list));
    if (!lst)
        return (0);
    char    *s = "mert";
    char    *c = "cemal";
    *lst = malloc(sizeof(t_list));
    if (!*lst)
        return (0);
    (*lst)->content = (char *)s;
    (*lst)->next = malloc(sizeof(t_list));
    if (!(*lst)->next)
        return (0);
    (*lst)->next->content = (char *)c;
    (*lst)->next->next = NULL;
    char    *f = "fatih";
    t_list  *n;
    n = malloc(sizeof(t_list));
    n->content = (char *)f;
    n->next = NULL;
    ft_lstadd_front(lst, n);
    //printf("%s", (lst[0])->content);
    char sert[] = "mert";
    char *p;
    p = &sert[0];
    printf("%s", p[0]);
}
*/