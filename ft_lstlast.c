/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:39:17 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/15 01:41:33 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*
int main()
{
    t_list  *lst;
    char    *c = "cemal";
    char    *m = "mert";
    char    *e = "emre";
    lst = malloc(sizeof(lst));
    lst->content = m;
    lst->next = malloc(sizeof(lst));
    lst->next->content = e;
    lst->next->next = NULL;
    printf("%s",ft_lstlast(lst)->content);
}
*/