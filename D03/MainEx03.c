/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MainEx03.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthys <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 15:43:57 by rthys             #+#    #+#             */
/*   Updated: 2016/09/01 16:32:25 by rthys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

void	ft_putnbr(int nbr)
{
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar((nbr % 10) + '0');
}

int		main(void)
{
	int	a;
	int	b;
	int poub;
	int	poub1;
	int	*div;
	int	*mod;
	
	a = 12;
	b = 10;
	poub = 0;
	poub1 = 0;
	div = &poub;
	mod = &poub1;
	ft_div_mod(a, b, div, mod);
	ft_putnbr(*div);
	ft_putchar('\n');
	ft_putnbr(*mod);
	return (0);
}
