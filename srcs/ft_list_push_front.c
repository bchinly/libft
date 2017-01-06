/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 04:18:35 by bchin             #+#    #+#             */
/*   Updated: 2016/11/09 18:49:20 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*current;

	current = ft_create_elem(data);
	if (begin_list)
	{
		current->data = data;
		current->next = *begin_list;
		*begin_list = current;
	}
}
