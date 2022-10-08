/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:47:42 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/08 13:48:28 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		len1;
	int		len2;
	int		i;

	i = 0;
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	res = (char *)malloc(len1 + len2);
	if (!res)
		return (res);
	while (i < len1 + len2)
	{
		if (i < len1)
			res[i] = s1[i];
		else if (i < len1 + len2)
			res[i] = s2[i - len1];
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
int main()
{
	const char *s1 = "cemal";
	const char *s2 = "dem";
	printf("%s",ft_strjoin(s1,s2));
}
*/