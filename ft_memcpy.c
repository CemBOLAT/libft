/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:56:40 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/08 11:11:17 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p_d;
	unsigned char	*p_s;

	p_d = (unsigned char *)dest;
	p_s = (unsigned char *)src;
	i = 0;
	if (!p_d && !p_s)
		return (0);
	while (i < n)
	{
		p_d[i] = p_s[i];
		i++;
	}
	return (dest);
}
/*
#include <cstddef>
#include <stdio.h>

int	main()
{
	char	dest[] =  "cemal";
	char	src[] = "cessdadadada";
	size_t	n = 112;
	printf("%s",ft_memcpy(dest,src,n));
}
*/
