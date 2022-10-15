/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 17:03:03 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/15 17:03:16 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_pos;
	size_t		last_spot;
	size_t		i;
	size_t		check;

	i = 0;
	last_pos = 0;
	check = 0;
	if (c > 127)
		return ((char *)s);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			last_spot = i;
			check++;
		}
		i++;
	}
	if (check != 0)
	{
		last_pos = (s + last_spot);
		return ((char *)last_pos);
	}
	return (0);
}
