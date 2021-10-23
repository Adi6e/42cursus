/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldarlene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:08:58 by ldarlene          #+#    #+#             */
/*   Updated: 2021/10/22 18:23:31 by ldarlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	i;
	size_t			cnt;
	size_t			size;

	if (!s)
		return (NULL);
	size = ft_strlen((char *) s);
	if (start + 1 > (unsigned int) size)
		len = 0;
	if (len < size)
		size = len;
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
