/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: c.bolat <cbolat@student.42kocaeli.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:32:14 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/07 22:18:15 by c.bolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	unsigned int	res;
	int				sign;
	int				sign_nbr;

	i = 0;
	res = 0;
	sign = 1;
	sign_nbr = 0;
	while ((str[i] == 32 || (str[i] >= 9 && str[i] <= 14)))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		sign_nbr++;
		i++;
	}
	if (sign_nbr > 1)
		return (0);
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
		res = res * 10 + (str[i++] - 48);
	if (sign_nbr == 1 && sign == -1)
		return (-res);
	return (res);
}
