/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MainEx00.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthys <rthys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 19:04:56 by rthys             #+#    #+#             */
/*   Updated: 2016/09/12 19:13:12 by rthys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strdup(char *src);

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

int		main(void)
{
	char	*str;
	char	*dest;

	dest = ""
	str = "Bananarama\n";
	dest = ft_strdup(str);
	ft_putstr("Doit afficher Bananarama : ")
	ft_putstr(dest);
	return (0);
}
