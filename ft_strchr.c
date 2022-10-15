/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:14:50 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/15 14:14:54 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

char	*ft_strchr(const char *s1, int c)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == c)
			return ((char *)(s1 + i));
		i++;
	}
	return (0);
}
/*
int main()
{
	const char *s1 = "cemal";
	int c = 'q';
	printf("%s--", ft_strchr(s1,c));
	printf("%s", strchr(s1,c));
}
*/
