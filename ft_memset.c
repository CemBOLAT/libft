/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:57:07 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/08 11:01:32 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)s;
	if (!p)
		return (0);
	while (n > i)
	{
		p[i] = c;
		i++;
	}
	return (s);
}
/*
#include <string.h>
int main(void)
{
	char str[50];
	strcpy(str, "This is string.h library function");
	printf("%s\n",str);
	ft_memset(str, 100, 5);
	printf("%s",str);
	return (0);
}
*/
