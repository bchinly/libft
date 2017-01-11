/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 05:27:03 by bchin             #+#    #+#             */
/*   Updated: 2017/01/11 05:34:22 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char const *str);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned int	i;

	str = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (*s1 != '\0')
	{
		str[i] = *s1;
		i++;
		s1++;
	}
	while (*s2 != '\0')
	{
		str[i] = *s2;
		i++;
		s2++;
	}
	str[i] = '\0';
	return (str);
}
