/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: c.bolat <cbolat@student.42kocaeli.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:44:37 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/09 21:24:34 by c.bolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if ((s) > (d))
	{
		ft_memcpy(dest, src, len);
	}
	else if ((d) > (s))
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*
    ////MERTCEMAL
    MERTCEMALEMAL
*/
/*
int main()
{
    const void    *s = "mert";
	void    *d = "cdadada";
    printf("%s-",ft_memmove(d+2,d,4));
    //printf("%s-",memmove(d+2,d,4));
    //printf("%s",memmove(d,s,4));
}
*/
