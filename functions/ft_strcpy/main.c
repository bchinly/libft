/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 18:20:19 by bchin             #+#    #+#             */
/*   Updated: 2017/01/05 18:28:28 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main()
{
	char *s1;
	char *s2;

	s1 = strdup("hello");
	s2 = strdup("world");
	printf("%s\n", s1);
	printf("%s\n", s2);
	ft_strcpy(s1, s2);
	printf("%s\n", s1);
	printf("%s\n", s2);
	s1 = strdup("hello");
	s2 = strdup("world");
	printf("%s\n", s1);
	printf("%s\n", s2);
	strcpy(s1, s2);
	printf("%s\n", s1);
	printf("%s\n", s2);
}

