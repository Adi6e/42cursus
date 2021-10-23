/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldarlene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:50:24 by ldarlene          #+#    #+#             */
/*   Updated: 2021/10/22 21:27:47 by ldarlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_in_set(char c, const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		++i;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;

	if (!s1)
		return (NULL);
	i = 0;
	while (ft_is_in_set(s1[i], set))
		++i;
	j = ft_strlen((char *) s1) - (*s1 != '\0');
	if (j != 0)
		while (ft_is_in_set(s1[j], set) && j > i)
			--j;
	return (ft_substr(s1, i, j - i + 1));
}
