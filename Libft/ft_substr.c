/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldarlene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:08:58 by ldarlene          #+#    #+#             */
/*   Updated: 2021/10/23 20:14:25 by ldarlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	i;
	size_t			cnt;
	size_t			size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (start + 1 > (unsigned int) size)
		len = 0;
	size = ft_min(len + 1, size - start + 1);
	res = (char *)malloc((size + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	i = start;
	cnt = 0;
	while (cnt < size)
	{
		res[cnt] = s[i];
		++i;
		++cnt;
	}
	res[cnt] = '\0';
	return (res);
}
