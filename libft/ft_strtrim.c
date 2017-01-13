/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 05:54:49 by bchin             #+#    #+#             */
/*   Updated: 2017/01/13 01:26:13 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

static int	ft_front(char const *s)
{
	int i;

	i = 0;
	while (is_space(s[i]) == 1 && s[i] != '\0')
		i++;
	if (s[i] == '\0')
		return (1);
	return (i);
}

static int	ft_back(char const *s)
{
	int i;
	int j;

	j = 0;
	i = ft_strlen(s) - 1;
	while (is_space(s[i]) == 1)
	{
		i--;
		j++;
	}
	return (j);
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	if (!s)
		return (NULL);
	i = ft_strlen(s) - ft_back(s) - ft_front(s);
	if (ft_front(s) == 1)
		i = 0;
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
