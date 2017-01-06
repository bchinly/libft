/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 11:46:39 by bchin             #+#    #+#             */
/*   Updated: 2016/11/08 18:17:17 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int result;
	int negative;
	int i;

	i = 0;
	result = 0;
	negative = 1;
	if (str[i] == '-')
	{
		negative = -1;
		i++;
	}
	if (str[i] == '+')
		++i;
	while (str[i] <= ' ')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		++i;
	}
	return (result * negative);
}
