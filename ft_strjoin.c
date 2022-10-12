/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: c.bolat <cbolat@student.42kocaeli.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:47:42 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/09 14:11:44 by c.bolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	len1;
	size_t	len2;
	size_t	i;
	size_t	m;

	i = 0;
	m = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	res = malloc(sizeof(char *) * (len1 + len2 + 1));
	while (i < len1)
	{
		res[i] = s1[i];
		i++;
	}
	while (i < len1 + len2)
		res[i++] = s2[m++];
	res[i] = '\0';
	return (res);
}
/*
int main()
{
	const char *s1 = "cemal";
	const char *s2 = "dem";
	printf("%s",ft_strjoin(s1,s2));
	//ft_strjoin(s1,s2);
}
*/
