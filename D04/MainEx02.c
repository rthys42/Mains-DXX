/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MainEx02.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthys <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 11:25:08 by rthys             #+#    #+#             */
/*   Updated: 2016/09/02 15:07:40 by rthys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_iterative_power(int nb, int power);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == (-2147483648))
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		nb = -(nb);
		ft_putchar('-');
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}

int		main(void)
{
	int	nb;

	nb = 5;
	nb = ft_iterative_power(nb, 2);
	ft_putnbr(nb);
	return (0);
}
