/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MainEx03.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthys <rthys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 19:04:56 by rthys             #+#    #+#             */
/*   Updated: 2016/09/13 15:12:32 by rthys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_any(char **tab, int (*f)(char *));

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

	funeven = &ft_even;
	(void)argc;
	if (ft_any(argv, funeven) == 1)
		printf("Que des voyelles!\n");
	else
		printf("Il y a des consonnes...\n");
	return (0);
}
