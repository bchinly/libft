/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 14:16:03 by bchin             #+#    #+#             */
/*   Updated: 2017/01/10 23:45:01 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(unsigned char *s1, unsigned char *s2)
{
	while ((*s1 == *s2)
		&& (*s1 != '\0' || *s2 != '\0'))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
