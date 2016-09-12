/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MainEx01.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthys <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 12:00:30 by rthys             #+#    #+#             */
/*   Updated: 2016/09/02 13:57:03 by rthys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr);

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
	int	*********ptr;
	int	********ptr1;
	int	*******ptr2;
	int	******ptr3;
	int	*****ptr4;
	int	****ptr5;
	int	***ptr6;
	int	**ptr7;
	int	*ptr8;
	int	nbr;

	nbr = 1;
	ptr8 = &nbr;
	ptr7 = &ptr8;
	ptr6 = &ptr7;
	ptr5 = &ptr6;
	ptr4 = &ptr5;
	ptr3 = &ptr4;
	ptr2 = &ptr3;
	ptr1 = &ptr2;
	ptr = &ptr1;
	ft_putnbr(nbr);
	ft_putchar('\n');
	ft_ultimate_ft(ptr);
	ft_putnbr(nbr);
	return (0);
}
