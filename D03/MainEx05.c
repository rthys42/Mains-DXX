/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthys <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 16:43:32 by rthys             #+#    #+#             */
/*   Updated: 2016/09/01 18:19:01 by rthys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char *str;

	str = "VaninaaAaaAaaaaAaaa\n";
	ft_putstr(str);
	return (0);
}
