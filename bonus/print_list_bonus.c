/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimesan <jaimesan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:54:52 by jaimesan          #+#    #+#             */
/*   Updated: 2024/10/24 10:55:00 by jaimesan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	print_list(t_alist *lst)
{
	while (lst)
	{
		ft_printf("%d ", lst->content);
		lst = lst->next;
	}
	ft_printf("\n");
}
