/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: c.bolat <cbolat@student.42kocaeli.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:30:14 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/12 23:06:41 by c.bolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*temp;

	if (!lst)
		return (NULL);
	res = ft_lstnew(f(lst->content));
	if (!res)
		return (NULL);
	temp = res;
	lst = lst->next;
	while (lst)
	{
		temp->next = ft_lstnew(f(lst->content));
		if (!temp->next)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		temp = temp->next;
		lst = lst->next;
	}
	return (res);
}
/*/
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