/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 02:47:29 by bchin             #+#    #+#             */
/*   Updated: 2017/01/13 03:14:15 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_listmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlst;
	t_list	*ptr;

	ptr = f(lst);
	newlst = f(lst);
	if (ptr == NULL)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
		ptr->next = f(lst);
		if (ptr->next == NULL)
			return (NULL);
		newlst = newlst->next;
	}
	return (newlst);
}
