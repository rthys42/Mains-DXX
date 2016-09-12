/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MainEx02.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthys <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 11:47:48 by rthys             #+#    #+#             */
/*   Updated: 2016/09/05 13:17:56 by rthys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_atoi(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -(nb);
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}

int		main(void)
{
	ft_putstr("Your atoi :\n");
	ft_putnbr(ft_atoi("-2147483648"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("-100"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("0"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("1234567890"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("123rthrerth"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("segse123"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("-qwfw12sgr4"));
	ft_putstr("\n\nThe REAL atoi (please stand up) :\n");
	ft_putnbr(atoi("-2147483648"));
	ft_putchar('\n');
	ft_putnbr(atoi("-100"));
	ft_putchar('\n');
	ft_putnbr(atoi("0"));
	ft_putchar('\n');
	ft_putnbr(atoi("1234567890"));
	ft_putchar('\n');
	ft_putnbr(atoi("123rthrerth"));
	ft_putchar('\n');
	ft_putnbr(atoi("segse123"));
	ft_putchar('\n');
	ft_putnbr(atoi("-qwfw12sgr4"));
	ft_putchar('\n');
	return (0);
}
