/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 04:30:42 by bchin             #+#    #+#             */
/*   Updated: 2017/01/11 06:01:59 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char const *src);

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*str;
	unsigned int	i;

	str = ft_strdup((char const *)s);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		str[i] = f(s[i]);
		i++;
	}
	return (str);
}
