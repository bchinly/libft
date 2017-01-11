/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 01:29:25 by bchin             #+#    #+#             */
/*   Updated: 2017/01/11 01:40:02 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strlen(char *str);

void	*ft_memchr(void *s, int c, size_t n)
{
	char *ptr;
	int i;

	ptr = s;
	i = 0;
	while (ptr[i] != '\0' && n > 0)
	{
		if (ptr[i] == c)
			return (&s[i]);
		i++;
		n--;
	}
	if (c == '\0' && ft_strlen(ptr) <= n)
	{
		i = ft_strlen(ptr);
			return (&s[i]);
	}
	return (NULL);
}
