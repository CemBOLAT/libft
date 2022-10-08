/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:46:40 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/08 18:12:27 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
t_list ft_lstadd_back(t_list **lst, t_list *new)
{
    while (lst)
        lst = *(lst->next);
    lst->next = new;
    return (lst->next);
}

int main()
{
    t_list  **lst;
    char    *c = "cemal";
    char    *m = "mert";
    char    *e = "emre";
    t_list  *f;

    f->content = "furkan";
    f->next = NULL;

    lst = malloc(sizeof(lst));
    lst->content = (char *)m;
    lst->next = malloc(sizeof(lst));
    lst->next->content = (char *)e;
    printf("%s",ft_lstadd_back(&lst,f)->content);
}
*/