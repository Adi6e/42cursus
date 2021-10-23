/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldarlene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 20:20:02 by ldarlene          #+#    #+#             */
/*   Updated: 2021/10/22 20:00:34 by ldarlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	ch;

	ch = c;
	i = 0;
	while (1)
	{
		if (s[i] == ch)
			break ;
		if (s[i] == '\0')
		{
			if (ch == '\0')
				break ;
			else
				return (NULL);
		}
		++i;
	}
	return ((char *)(s + i));
}
