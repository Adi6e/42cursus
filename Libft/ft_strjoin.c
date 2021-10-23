/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldarlene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:00:46 by ldarlene          #+#    #+#             */
/*   Updated: 2021/10/23 20:13:03 by ldarlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	fsize;
	size_t	ssize;
	char	*res;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	fsize = ft_strlen(s1);
	ssize = ft_strlen(s2);
	if (fsize > (18446744073709551615 - ssize))
		return (NULL);
	res = (char *)malloc((fsize + ssize + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = -1;
	while (s1[++i])
		res[i] = s1[i];
	j = -1;
	while (s2[++j])
		res[i + j] = s2[j];
	res[i + j] = '\0';
	return (res);
}
