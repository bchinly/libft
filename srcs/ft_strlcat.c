/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 21:09:53 by bchin             #+#    #+#             */
/*   Updated: 2017/01/11 03:38:40 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		ft_strlen(char *str);

size_t	ft_strlcat(char *s1, char *s2, size_t size)
{
	char	*d;
	char	*s;
	size_t	length;
	size_t	n;

	d = s1;
	s = s2;
	n = size;
	while (n > 0 && *d != '\0')
	{
		n--;
		d++;
	}
	length = d - s1;
	n = size - length;
	if (n == 0)
		return (length + ft_strlen(s));
	while (*s != '\0')
	{
		if (n > 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (length + s - s1);
}
