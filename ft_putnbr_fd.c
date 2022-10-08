/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:45:54 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/08 13:46:40 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	size_t	i;
	char	p;

	i = 0;
	if (-2147483648 == n)
	{
		write(fd, "-2147483648", 11);
	}
	else if (n < 0)
	{
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else if (n <= 9)
	{
		p = n + '0';
		write(fd, &p, 1);
	}
}
/*
int	main(){
	ft_putnbr_fd(12359,1);
}
*/