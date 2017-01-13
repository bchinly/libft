/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 02:21:43 by bchin             #+#    #+#             */
/*   Updated: 2017/01/13 02:36:56 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*current;
	t_list	*list;

	if (alst == NULL)
		return ;
	list = *alst;
	while (list != NULL)
	{
		current = list->next;
		ft_lstdelone(&list, del);
		list = current;
	}
	*alst = NULL;
}
