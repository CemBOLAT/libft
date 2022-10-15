/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:28:35 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/15 16:31:18 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	res;

	i = ft_strlen(dest);
	res = ft_strlen(src);
	if (size <= i)
		res += size;
	else
		res += i;
	if (i > size)
		return (res);
	j = 0;
	while (src[j] != '\0' && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (res);
}
/*
#include <string.h>
int main(void)
{
    char s1[11] = "CemalA";
    char s2[] = " World!";
	printf("ft_strcat :: %s :: %zu\n", s1, ft_strlcat(s1, s2, 8));
	printf("strcat :: %s :: %zu\n", s1, strlcat(s1, s2, 8));
	printf("%s",s1);
}
*/