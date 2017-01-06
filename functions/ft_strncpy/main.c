/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 18:34:15 by bchin             #+#    #+#             */
/*   Updated: 2017/01/05 19:41:54 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main()
{
	char *s1;
	char *s2;

	s1 = strdup("hello world");
	s2 = strdup("1234");
	printf("%s\n", s1);
	printf("%s\n", s2);
	ft_strncpy(s1, s2, 3);
	printf("%s\n", s1);
	printf("%s\n", s2);
	s1 = strdup("hello world");
	s2 = strdup("1234");
	printf("%s\n", s1);
	printf("%s\n", s2);
	strncpy(s1, s2, 3);
	printf("%s\n", s1);
	printf("%s\n", s2);
}
