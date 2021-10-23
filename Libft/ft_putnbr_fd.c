/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldarlene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 20:01:18 by ldarlene          #+#    #+#             */
/*   Updated: 2021/10/22 19:30:08 by ldarlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char		str[11];
	int			i;
	long long	tmp;

	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	i = 10;
	str[i--] = '\0';
	tmp = n;
	if (tmp < 0)
	{
		write(fd, "-", 1);
		tmp *= -1;
	}
	while (tmp)
	{
		str[i--] = (tmp % 10) + '0';
		tmp /= 10;
	}
	ft_putstr_fd(str + i + 1, fd);
}
