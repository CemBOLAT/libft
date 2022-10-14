/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: c.bolat <cbolat@student.42kocaeli.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:48:36 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/12 21:34:34 by c.bolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digitlen(int n)
{
	int	res;

	res = 0;
	if (n < 0)
	{
		res = 1;
		n *= -1;
	}
	while (n != 0)
	{
		n /= 10;
		res++;
	}
	return (res);
}

static char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	temp;

	i = 0;
	while (str[i] != '\0')
		i++;
	len = i;
	i = 0;
	while (i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
		i++;
	}
	return (str);
}

static int	ft_sign_con(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		digit_l;
	int		i;

	i = 0;
	digit_l = ft_digitlen(n);
	if (n == -2147483648)
	{
		res = "-2147483648";
		return (res);
	}
	res = malloc(sizeof(char) * (digit_l + 1));
	if (!res)
		return (NULL);
	if (n < 0)
		res[digit_l - 1] = '-';
	n = ft_sign_con(n);
	while (n != 0)
	{
		res[i++] = (n % 10) + '0';
		n /= 10;
	}
	res[digit_l] = '\0';
	res = ft_strrev(res);
	return (res);
}
