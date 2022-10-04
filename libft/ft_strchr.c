/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:57:17 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/04 15:42:03 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s1, int c)
{
    int i;

    i = 0;
    while (s[i] == c)
    {
        if (s[i] == c)
            return ((char *)(s + 1));
        i++;
    }
    return (0);
}
/*
char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i++] != '\0')
    {
        if (s[i] == c)
    	    return ((char *)(s + i));
    }
    return (0);
}
*/
