/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 03:59:49 by bchin             #+#    #+#             */
/*   Updated: 2017/01/11 04:08:21 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len);

void	*ft_memalloc(size_t size)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * size);
	if (str)
	{
		ft_memset(str, 0, size);
	}
	return (str);
}
