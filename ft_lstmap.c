/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:30:14 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/15 18:40:10 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*temp;

	if (!lst || !*f)
		return (NULL);
	while (lst)
	{
		temp = lstnew(lst->content);
		if (!temp)
		{
			del(temp->content);
			free(temp);
			return (NULL);
		}
		ft_lstadd_back
		
	}
	return (res);
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

    ft_lstmap(*lst, del, del);
    printf("%s", (*lst)->content);
    return 0;
}
*/