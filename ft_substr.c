/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: c.bolat <cbolat@student.42kocaeli.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 23:32:48 by c.bolat           #+#    #+#             */
/*   Updated: 2022/10/12 23:05:49 by c.bolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	size_t	c;
	size_t	f;

	f = 0;
	c = ((size_t)start);
	if (s == 0)
		return (0);
	while (f < len && s[f + start] != '\0')
		f++;
	str = malloc((f + 1) * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	while (i < len && s[c] != '\0')
		str[i++] = s[c++];
	str[i] = '\0';
	return (str);
}
