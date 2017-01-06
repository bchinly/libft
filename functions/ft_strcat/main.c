/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 19:42:15 by bchin             #+#    #+#             */
/*   Updated: 2017/01/05 20:07:01 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *s1, char *s2);

int		main()
{
	char *s1;
	char *s2;

	s1 = strdup("hello");
	s2 =strdup("world");
	ft_strcat(s1, s2);
	printf("%s\n", s1);
	printf("%s\n", s2);
	s1 = strdup("hello");
	s2 =strdup("world");
	strcat(s1, s2);
	printf("%s\n", s1);
	printf("%s\n", s2);
}
