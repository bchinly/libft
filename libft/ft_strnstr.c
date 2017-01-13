/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 00:38:53 by bchin             #+#    #+#             */
/*   Updated: 2017/01/13 03:39:34 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *big, char const *little, size_t len)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && len > 0)
	{
		if (big[i] == little[j])
			k = i;
		while (big[i] == little[j] && len > 0)
		{
			i++;
			j++;
			len--;
			if (little[j] == '\0')
				return ((char *)&big[k]);
		}
		i++;
		len--;
		j = 0;
	}
	return (NULL);
}
