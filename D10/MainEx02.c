/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MainEx02.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthys <rthys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 19:04:56 by rthys             #+#    #+#             */
/*   Updated: 2016/09/13 14:34:51 by rthys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		*ft_map(int *tab, int length, int (*f)(int));

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_times(int nbr)
{
	nbr = nbr * 2;
	return (nbr);
}

int		main(void)
{
	int		*tab;
	int		length;
	int		*ret;
	int		(*funtimes)(int);
	int i;
	
	length = 3;
	i = 0;
	tab = (int *)malloc(sizeof(int) * length);
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	funtimes = &ft_times;
	ret = ft_map(tab, length, funtimes);
	while (i < length)
	{
		printf("Tab[%d] = %d\n", i, ret[i]);
		i++;
	}
	return (0);
}
