/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MainEx04.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthys <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 11:47:48 by rthys             #+#    #+#             */
/*   Updated: 2016/09/05 16:13:29 by rthys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
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

int		main(void)
{
	char	*src = "Vaninaaa\0AAAaaaAAA";
	char	*src1 = "Rappelle\0-toiiiii";
	char	dest[ft_strlen(src) + 1];

	ft_putstr("dest avant ft_strcpy : ");
	ft_putstr(dest);
	ft_putchar('\n');
	ft_putstr("dest apres ft_strcpy : ");
	ft_putstr(ft_strncpy(dest, src, 0));
	ft_putchar('\n');
	ft_putstr("dest avant strcpy : ");
	ft_putstr(dest);
	ft_putchar('\n');
	ft_putstr("dest apres strcpy : ");
	ft_putstr(strncpy(dest, src1, 0));
	return (0);
}
