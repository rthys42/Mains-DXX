/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MainEx00.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthys <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 15:47:16 by rthys             #+#    #+#             */
/*   Updated: 2016/09/13 15:49:36 by rthys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data); // Retirez la ligne si le prototype est dans votre .h

int		main(void)
{
	t_list	*new_elem;
	void	*data;

	data = "ESTAAAAAANAMIGO";
	new_elem = ft_create_elem(data);
	printf("Doit afficher 0x0 = %p\n", new_elem->next);
	return (0);
}
