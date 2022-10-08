/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:01:59 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/08 16:33:05 by marvin           ###   ########.fr       */
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
/*
int main()
{
    t_list  *lst;
    char    *c = "cemal";
    lst = malloc(sizeof(lst));
    lst->content = (char *)c;
    lst->next = malloc(sizeof(lst));
    lst->next->content = (char *)c;
    printf("%d",ft_lstsize(lst));
}
*/
//listeyi liste kadar aç
//
