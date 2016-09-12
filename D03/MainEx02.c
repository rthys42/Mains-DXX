/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MainEx01.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthys <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 12:00:30 by rthys             #+#    #+#             */
/*   Updated: 2016/09/01 12:59:30 by rthys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

void	ft_putnbr(int nbr)
{
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	ft_putchar((nbr % 10) + '0');
}

int		main(void)
{
	int	*a;
	int	*b;
	int	nbra;
	int	nbrb;

	nbra = 0;
	nbrb = 9;
	a = &nbra;
	b = &nbrb;
	ft_putstr("Avant : a = ");
	ft_putnbr(nbra);
	ft_putstr("  b = ");
	ft_putnbr(nbrb);
	ft_putchar('\n');
	ft_swap(a, b);
	ft_putstr("Apres : a = ");
	ft_putnbr(nbra);
	ft_putstr("  b = ");
	ft_putnbr(nbrb);
	ft_putchar('\n');
	return (0);
}
