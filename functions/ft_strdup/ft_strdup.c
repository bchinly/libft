/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 15:32:05 by bchin             #+#    #+#             */
/*   Updated: 2017/01/05 20:36:52 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strcpy(char *dest, char *src);

int		ft_strlen(char *str);

char		*ft_strdup(char *src)
{
	char *dest;

	dest = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dest == NULL)
		return (0);
	ft_strcpy(dest, src);
	return (dest);
}

