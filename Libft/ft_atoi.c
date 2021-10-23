/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldarlene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 20:39:06 by ldarlene          #+#    #+#             */
/*   Updated: 2021/10/23 19:55:35 by ldarlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	int	ft_isspace(char c)
{
	return (c == '\t' || c == '\n'
		|| c == '\f' || c == '\r'
		|| c == ' ' || c == '\v');
}

int	ft_atoi(const char *str)
{
	int	i;
	int	have_minus;
	int	res;

	res = 0;
	i = 0;
	have_minus = 1;
	while (ft_isspace(str[i]))
		++i;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			have_minus *= -1;
		++i;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		++i;
	}
	res *= have_minus;
	return (res);
}
