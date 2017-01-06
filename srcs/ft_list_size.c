/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 14:08:13 by bchin             #+#    #+#             */
/*   Updated: 2016/11/09 18:49:34 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*current;

	i = 0;
	current = begin_list;
	while (current != '\0')
	{
		i++;
		current = current->next;
	}
	return (i);
}
