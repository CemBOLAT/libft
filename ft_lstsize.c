/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: c.bolat <cbolat@student.42kocaeli.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:01:59 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/12 15:49:49 by c.bolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	res;

	res = 0;
	while (lst)
	{
		lst = lst->next;
		res++;
	}
	return (res);
}

int main()
{
    t_list  *lst;
    char    *c = "cemal";
    lst = malloc(sizeof(lst));
	if (!lst)
		return (0);
    lst->content = (char *)c;
    lst->next = malloc(sizeof(lst));
	if (!lst->next)
		return (0);
    lst->next->content = (char *)c;
	lst->next->next = NULL;
	printf("43");
    printf("%d",ft_lstsize(lst));
}
//listeyi liste kadar aç
//
