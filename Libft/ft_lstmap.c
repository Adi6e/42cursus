/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldarlene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 18:58:55 by ldarlene          #+#    #+#             */
/*   Updated: 2021/10/20 19:09:58 by ldarlene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*it;

	if (!lst)
		return (NULL);
	res = ft_lstnew((*f)(lst->content));
	if (!res)
		return (NULL);
	lst = lst->next;
	it = res;
	while (lst)
	{
		it->next = ft_lstnew((*f)(lst->content));
		if (it->next == NULL)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		lst = lst->next;
		it = it->next;
	}
	return (res);
}
