/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 05:07:33 by bchin             #+#    #+#             */
/*   Updated: 2017/01/11 05:11:21 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strequ(char const *s1, char const *s2)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0')
		&& (s1[i] == s2[i]))
		{
			i++;
		}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (1);
	return (0);
}