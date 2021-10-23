/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldarlene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:45:59 by ldarlene          #+#    #+#             */
/*   Updated: 2021/10/17 16:34:29 by ldarlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t				i;
	char				*s;
	unsigned char		val;

	i = 0;
	s = (char *) b;
	val = (unsigned char) c;
	while (i < len)
		s[i++] = val;
	return (b);
}
