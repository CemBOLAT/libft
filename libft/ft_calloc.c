/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:27:14 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/04 16:41:55 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void    *ptr;
    size_t  i;

    i = 0;
    ptr = malloc(count * size);
    if (ptr == NULL)
        return ptr;
    ft_bzero(ptr,count * size)
    return (ptr);
}
