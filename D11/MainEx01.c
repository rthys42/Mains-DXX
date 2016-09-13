/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MainEx01.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthys <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 16:13:24 by rthys             #+#    #+#             */
/*   Updated: 2016/09/13 16:16:17 by rthys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data);

int		main(void)
{
	t_list	*list;
	t_list	**begin_list;
	void	*data;

	data = "Vanina.";
	list = ft_create_elem(data);
	begin_list = &list;
	ft_list_push_back(begin_list, data);
	return (0);
}
