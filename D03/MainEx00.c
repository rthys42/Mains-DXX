/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MainEx00.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthys <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 12:00:30 by rthys             #+#    #+#             */
/*   Updated: 2016/09/02 13:56:55 by rthys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	ft_putchar((nbr % 10) + '0');
}

int		main(void)
{
	int	*ptr;
	int	nbr;

	nbr = 1;
	ptr = &nbr;
	ft_putnbr(nbr);
	ft_putchar('\n');
	ft_ft(ptr);
	ft_putnbr(nbr);
	return (0);
}
