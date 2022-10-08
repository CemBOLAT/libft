/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:44:37 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/08 13:44:49 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
    void    *d;
    printf("%s",ft_memmove(d,s,4));
}
*/
