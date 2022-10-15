/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:17:05 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/15 14:17:07 by cbolat           ###   ########.fr       */
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
	if (res == NULL)
		return (NULL);
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
