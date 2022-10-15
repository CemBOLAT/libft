/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:13:26 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/15 13:31:56 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
}
/*
void del(void *content)
{
    free(content);
}
int main()
{
    t_list **lst;
    lst = malloc(sizeof(t_list));
    
    
    char *lst1 = "a";
    char *lst2 = "b";
    (*lst) = malloc(sizeof(t_list));
    (*lst)->content = "1";
    (*lst)->next = malloc(sizeof(t_list));
    (*lst)->next->content = "2";
    (*lst)->next->next = NULL;

    ft_lstclear(lst, del);
    printf("%s", (*lst)->content);
    return 0;
}
*/
