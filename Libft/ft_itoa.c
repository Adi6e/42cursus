/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldarlene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:57:40 by ldarlene          #+#    #+#             */
/*   Updated: 2021/10/23 19:57:00 by ldarlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_cnt_digits(long long n)
{
	int	cnt;

	cnt = (n <= 0);
	while (n)
	{
		++cnt;
		n /= 10;
	}
	return (cnt);
}

char	*ft_itoa(int n)
{
	char		*res;
	int			size;
	int			i;
	long long	ln;

	ln = n;
	size = ft_cnt_digits(ln);
	res = (char *)malloc((size + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[size--] = '\0';
	i = 0;
	if (ln < 0)
	{
		res[i++] = '-';
		ln *= -1;
	}
	while (size >= i)
	{
		res[size--] = (ln % 10) + '0';
		ln /= 10;
	}
	return (res);
}
