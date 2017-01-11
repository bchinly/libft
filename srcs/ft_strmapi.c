/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 05:03:07 by bchin             #+#    #+#             */
/*   Updated: 2017/01/11 05:07:24 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char const *src);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	str = ft_strdup((char const *)s);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
