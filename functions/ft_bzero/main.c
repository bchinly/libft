/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 17:22:31 by bchin             #+#    #+#             */
/*   Updated: 2017/01/05 17:47:51 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n);

int		main()
{
	char *str;
	char *str2;

	str = strdup("hello");
	printf("%s\n", str);
	ft_bzero(str, 1);
	printf("%s\n", str);
	str2 = strdup("hello");
	bzero(str2, 1);
	printf("%s\n", str2);
}
