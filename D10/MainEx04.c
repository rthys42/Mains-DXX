/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MainEx04.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthys <rthys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 19:04:56 by rthys             #+#    #+#             */
/*   Updated: 2016/09/13 15:17:39 by rthys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_count_if(char **tab, int (*f)(char *));

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_even(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o'
				|| str[i] == 'u' || str[i] == 'y')
			i++;
		else if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I'
					|| str[i] == 'O' || str[i] == 'U' || str[i] == 'Y')
			i++;
		else if (str[i] == '.' || str[i] == '/')
			i++;
		else
			return (0);
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		(*funeven)(char *);
	int		ret;

	funeven = &ft_even;
	(void)argc;
	ret = ft_count_if(argv, funeven);
	printf("Nombre de chaines avec uniquement des voyelles = %d", ret);
	return (0);
}
