/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 14:16:03 by bchin             #+#    #+#             */
/*   Updated: 2017/01/18 17:57:22 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char const *s1, char const *s2)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while ((*p1 == *p2)
		&& (*p1 != '\0' || *p2 != '\0'))
	{
		p1++;
		p2++;
	}
	return (*p1 - *p2);
}
