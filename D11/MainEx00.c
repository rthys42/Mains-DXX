/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MainEx00.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthys <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 15:47:16 by rthys             #+#    #+#             */
/*   Updated: 2016/09/14 16:49:29 by rthys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data); // Retirez la ligne si le prototype est dans votre .h

int		main(void)
{
	t_list	*new_elem;

	new_elem = ft_create_elem("ESTAAAAAANAMIGO");
	printf("Doit afficher ESTAAAAAANAMIGO = %s\n", (char *)new_elem->data);
	return (0);
}
