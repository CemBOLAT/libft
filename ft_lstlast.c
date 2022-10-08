/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:39:17 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/08 18:03:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (1 == 1)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
}

/*
int main()
{
    t_list  *lst;
    char    *c = "cemal";
    char    *m = "mert";
    char    *e = "emre";
    lst = malloc(sizeof(lst));
    lst->content = (char *)m;
    lst->next = malloc(sizeof(lst));
    lst->next->content = (char *)e;
    printf("%s",ft_lstlast(lst)->content);
}
*/
