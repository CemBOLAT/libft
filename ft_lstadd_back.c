/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:46:40 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/15 17:22:17 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	(temp) = malloc(sizeof(t_list));
	if (!(temp))
		return ;
	temp = *lst;
	if (!new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	return ;
}
/*
int main()
{
    t_list  **lst;
    lst = malloc(sizeof(t_list));
    char    *f = "cemal";
    char    *s = "ela";
    char    *t = "hasan";
    char    *l = "guleser";
    t_list  *new;
    new = malloc(sizeof(t_list));
    new->content = l;
    new->next = NULL;
    if (!(lst))
        return (0);
    *lst = malloc(sizeof(t_list));
    (*lst)->content = (char *)f;
    (*lst)->next = malloc(sizeof(t_list));
    (*lst)->next->content = (char *)s;
    (*lst)->next->next = malloc(sizeof(t_list));
    (*lst)->next->next->content = (char *)t;
    (*lst)->next->next->next = NULL;
    printf("%s\n",(*lst)->next->content);
    ft_lstadd_back(lst,new);
    printf("%s",(*lst)->next->next->next->content);
}
*/