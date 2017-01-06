/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 18:04:09 by bchin             #+#    #+#             */
/*   Updated: 2017/01/05 18:15:42 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int		main()
{
	char	*str;
	char	*test;

	str = ft_strdup("hello");
	printf("%s\n", str);
	test = strdup("world");
	printf("%s\n", test);
}
