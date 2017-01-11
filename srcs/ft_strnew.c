/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 04:12:30 by bchin             #+#    #+#             */
/*   Updated: 2017/01/11 04:18:10 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len);

char	*ft_strnew(size_t size)
{
	char *str;

	str = (char*)malloc(sizeof(char) * size + 1);
	if (str)
	{
		ft_memset(str, 0, size + 1);
	}
	return (str);
}
