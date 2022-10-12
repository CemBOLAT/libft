/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: c.bolat <cbolat@student.42kocaeli.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:56:40 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/09 19:00:23 by c.bolat          ###   ########.fr       */
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
	if (!p_d || !p_s)
		return (0);
	while (i < n)
	{
		p_d[i] = p_s[i];
		i++;
	}
	p_d[i] = '\0';
	return (dest);
}
/*
int	main()
{
	char	dest[] =  "abcdef";
	char	src[] = "ubccc";
	size_t	n = 6;
	printf("%s",ft_memcpy(dest,src,n));
}
*/
