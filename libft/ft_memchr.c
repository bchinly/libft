/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 01:29:25 by bchin             #+#    #+#             */
/*   Updated: 2017/01/13 01:22:25 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void const *s, int c, size_t n)
{
	char const	*ptr;
	int			i;

	ptr = (const char *)s;
	i = 0;
	while (ptr[i] != '\0' && n > 0)
	{
		if (ptr[i] == c)
			return ((void*)&s[i]);
		i++;
		n--;
	}
	if (c == '\0')
	{
		i = ft_strlen(ptr);
		return ((void*)&s[i]);
	}
	return (NULL);
}
