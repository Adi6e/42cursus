/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldarlene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 20:33:55 by ldarlene          #+#    #+#             */
/*   Updated: 2021/10/22 20:22:57 by ldarlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				size;
	int				i;
	unsigned char	ch;

	size = ft_strlen((char *) s);
	ch = c;
	i = size;
	while (1)
	{
		if (i == -1)
			return (NULL);
		if (s[i] == ch)
			break ;
		--i;
	}
	return ((char *)(s + i));
}
