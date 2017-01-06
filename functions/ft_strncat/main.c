/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 20:40:57 by bchin             #+#    #+#             */
/*   Updated: 2017/01/05 21:01:48 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *s1, char *s2, size_t n);

int		main()
{
	char *s1;
	char *s2;

	s1 = strdup("hello");
	s2 = strdup("world");
	ft_strncat(s1, s2, 3);
	printf("%s\n", s1);
	printf("%s\n", s2);
	s1 = strdup("hello");
	s2 = strdup("world");
	strncat(s1, s2, 3);
	printf("%s\n", s1);
	printf("%s\n", s2);
}
