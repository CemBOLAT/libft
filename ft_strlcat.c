/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:12:33 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/08 11:17:03 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		len_d;
	size_t		src_i;
	size_t		res;

	len_d = ft_strlen(dest);
	res = ft_strlen(src);
	src_i = 0;
	if (size <= len_d)
		res += size;
	else
		res += len_d;
	if (len_d > size)
		return (res);
	while (src[src_i] != '\0' && len_d + 1 < size)
		dest[len_d++] = src[src_i++];
	dest[len_d] = '\0';
	return (res);
}
