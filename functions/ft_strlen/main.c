/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 17:54:57 by bchin             #+#    #+#             */
/*   Updated: 2017/01/05 17:59:43 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strlen(char *s);

int		main()
{
	char *str;

	str = strdup("hello");
	printf("%d\n", ft_strlen(str));
	printf("%lu\n", strlen(str));
}
