/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldarlene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:48:48 by ldarlene          #+#    #+#             */
/*   Updated: 2021/10/23 20:13:19 by ldarlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t maxlen)
{
	size_t	dstsize;
	size_t	srcsize;
	size_t	i;
	int		j;

	dstsize = ft_strlen((const char *) dst);
	srcsize = ft_strlen(src);
	if (maxlen < dstsize)
		return (maxlen + srcsize);
	if (!dst || !src)
		return (dstsize + srcsize);
	i = dstsize;
	j = 0;
	while (maxlen != 0 && src[j] && i < maxlen - 1)
	{
		dst[i] = src[j];
		++i;
		++j;
	}
	dst[i] = '\0';
	if (maxlen < dstsize)
		dstsize = maxlen;
	return (dstsize + srcsize);
}
