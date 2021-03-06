/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MainEx02.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthys <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 16:13:24 by rthys             #+#    #+#             */
/*   Updated: 2016/09/13 16:50:56 by rthys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data);

int		main(void)
{
	t_list	*list;
	t_list	**begin_list;
	void	*data;

	data = "Vanina.";
	list = ft_create_elem(data);
	begin_list = &list;
	ft_list_push_front(begin_list, data);
	return (0);
}
