/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_four.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimesan <jaimesan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:37:51 by jaimesan          #+#    #+#             */
/*   Updated: 2024/10/23 15:15:02 by jaimesan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_four(t_alist **lsta, t_alist **lstb, int count_nums)
{
	while (ft_lstsize2(*lsta) > 3)
	{
		if ((*lsta)->index != 0)
		{
			if (count_index_pos(lsta, 0) <= (count_nums / 2))
				ft_ra(lsta);
			else
				ft_rra(lsta);
		}
		if ((*lsta)->index == 0)
			ft_pb(lsta, lstb);
	}
	if (!nums_ordered(lsta))
		ft_sort_three(lsta);
	ft_pa(lstb, lsta);
}
