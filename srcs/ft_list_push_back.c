/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 04:10:20 by bchin             #+#    #+#             */
/*   Updated: 2016/11/09 18:48:53 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *current;
	t_list *newnode;

	current = *begin_list;
	newnode = ft_create_elem(data);
	if (begin_list)
	{
		current = ft_create_elem(data);
		current->next = *begin_list;
		*begin_list = current;
		return ;
	}
	while (current->next != 0)
		current = current->next;
	current->next = newnode;
	newnode->next = 0;
}
