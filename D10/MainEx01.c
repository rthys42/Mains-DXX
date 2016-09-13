/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MainEx01.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthys <rthys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 19:04:56 by rthys             #+#    #+#             */
/*   Updated: 2016/09/13 14:17:47 by rthys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_foreach(int *tab, int length, void (*f)(int));

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
	int		*tab;
	int		length;
	void	(*funnbr)(int);

	tab = (int *)malloc(sizeof(int) * 3);
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	length = 3;
	funnbr = &ft_putnbr;
	ft_foreach(tab, length, funnbr);
	return (0);
}
