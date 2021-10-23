/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldarlene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:59:09 by ldarlene          #+#    #+#             */
/*   Updated: 2021/10/23 20:11:48 by ldarlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count_words(const char *str, char c)
{
	int	i;
	int	count;
	int	j;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] != '\0' && str[i++] != c)
			++j;
		if (j > 0)
			++count;
	}
	return (count);
}

static	char	*ft_cpy(char *str, int i, int cnt)
{
	int		j;
	char	*res;

	res = (char *)malloc((cnt + 1) * sizeof(char));
	if (res == NULL)
		res = NULL;
	res[cnt] = '\0';
	j = 0;
	while (j < cnt)
	{
		res[j] = str[i - cnt + j];
		++j;
	}
	return (res);
}

char	**ft_split(const char *str, char c)
{
	char	**res;
	int		i;
	int		cnt;
	int		j;

	if (!str)
		return (NULL);
	res = (char **)malloc((ft_count_words(str, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		cnt = 0;
		while (str[i + cnt] && str[i + cnt] != c)
			++cnt;
		if (cnt > 0)
			res[j++] = ft_cpy((char *) str, i + cnt, cnt);
		i += cnt;
		if (str[i])
			++i;
	}
	res[j] = NULL;
	return (res);
}
