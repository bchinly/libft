/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 05:54:49 by bchin             #+#    #+#             */
/*   Updated: 2017/01/11 08:27:52 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char const *str);

static int	is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

static int	length(char const *s)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = ft_strlen(s);
	printf("%d ", k);
	while (is_space(s[i]) == 1)
	{
		i++;
		j++;
	}
	while (is_space(s[k]) == 1 && k > 0)
	{
		k--;
		j++;
	}
	k = k - j;
	printf("%d", k);
	return (k);
}

char	*ft_strtrim(char const *s)
{
	char			*str;
	int	i;
	int	j;
	int	k;

	i = length(s);
	j = 0;
	k = 0;
	str = (char*)malloc(sizeof(char) * i + 1);
	if (str == NULL)
		return (NULL);
	while (is_space(s[k]) == 1)
		k++;
	while (j != i)
	{
		str[j] = s[k];
		j++;
		k++;
	}
	str[j] = '\0';
	return (str);
}
