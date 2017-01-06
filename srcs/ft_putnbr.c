/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 19:39:03 by bchin             #+#    #+#             */
/*   Updated: 2016/10/31 20:59:43 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb <= 2147483647)
	{
		if (nb <= 9)
			ft_putchar(nb + '0');
		else if (nb > 9)
		{
			ft_putnbr(nb / 10);
			ft_putchar(nb % 10 + '0');
		}
	}
	if (nb < 0 && nb >= -2147483647)
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(nb + 2362232012);
		ft_putchar('8');
	}
}