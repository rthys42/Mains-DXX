/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MainEx02.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthys <rthys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 19:04:56 by rthys             #+#    #+#             */
/*   Updated: 2016/09/12 19:13:12 by rthys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max);

int		main(void)
{
	int i;
	int ret;
	int	*tab;

	i = 0;
	ret = ft_ultimate_range(&tab, 5, 10);
	while (i < 5)
	{
		printf("Tab[%d] = %d\n", i, tab[i]);
		i++;
	}
	printf("Retour de la fonction = %d\n", ret);
	return (0);
}
