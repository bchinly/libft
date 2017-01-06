/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 15:55:41 by bchin             #+#    #+#             */
/*   Updated: 2017/01/05 19:30:57 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len);

int		main()
{
	char *str;

	str = strdup("hello");
	ft_memset(str, 'a', 5);
	printf("%s\n", str);
	str = strdup("hello");
	memset(str, 'a', 5);
	printf("%s\n", str);
}
