/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:11:09 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/15 18:15:20 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if ((s) > (d))
		ft_memcpy(dest, src, len);
	else if ((d) > (s))
	{
		while (len > 0)
		{
			len--;
			d[len] = s[len];
		}
	}
	return (dest);
}

/*
int	main()
{
	char a[10] = "canodis";
	//dest nodis
	//src  canodis
	//first step
	//dest nodos
	//src	canodos
	//second step
	//dest nonos
	//src canonos
	//third step
	//dest nanos
	//src cananos
	//forth step
	//dest canos
	//src cacanos
	//printf("\n%s\n",ft_memmove(a+2, a, 4));
	//dest canodis
	//src  nodis
	//nodisis
	//nodi direkt başa gider
	printf("\n%s",ft_memmove(a, a+2, 5));	
}
*/
