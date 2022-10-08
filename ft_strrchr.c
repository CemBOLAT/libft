/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:36:37 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/08 13:49:36 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

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
/*
int main()
{
	const char *s = "mertmert";
	printf("%s\n",ft_strrchr(s,'e'));
	printf("%s",strrchr(s,'e'));
}
*/
