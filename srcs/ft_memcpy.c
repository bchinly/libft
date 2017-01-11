/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 00:07:49 by bchin             #+#    #+#             */
/*   Updated: 2017/01/11 00:12:22 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	char *pdst;
	char *psrc;

	pdst = dst;
	psrc = src;

	while (n > 0)
	{
		*pdst++ = *psrc++;
		n--;
	}
	return (dst);
}
