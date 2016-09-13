/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MainEx05.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthys <rthys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 19:04:56 by rthys             #+#    #+#             */
/*   Updated: 2016/09/13 15:28:42 by rthys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_is_sort(int *tab, int length, int (*f)(int, int));

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_sort(int nbr, int nbr1)
{
	if (nbr - nbr1 > 0)
		return (1);
	else if (nbr - nbr1 < 0)
		return (-1);
	else
		return (0);
}

int		main(void)
{
	int		(*funsort)(int, int);
	int		*tab;

	funsort = &ft_sort;
	tab = (int *)malloc(sizeof(int) * 3);
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	if (ft_is_sort(tab, 3, funsort) == 1)
		printf("Tableau trie!\n");
	else
		printf("Tableau non trie!\n");
	return (0);
}
