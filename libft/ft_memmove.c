/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: c.bolat <cbolat@student.42kocaeli.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:44:37 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/07 23:49:17 by c.bolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
    size_t          i;
    unsigned char   *d;
    unsigned char   *s;

    s = (unsigned char *)src;
    d = (unsigned char *)dest;
    //printf("%s,%s\n",s,d);
    if ((s) > (d))
    {
        ft_memcpy(dest,src,len);
    }
    else if ((d) > (s))
    {
        printf("5\n");
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
