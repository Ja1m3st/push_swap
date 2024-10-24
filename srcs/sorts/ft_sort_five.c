/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimesan <jaimesan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:23:05 by jaimesan          #+#    #+#             */
/*   Updated: 2024/10/23 15:58:25 by jaimesan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_five(t_alist **lsta, t_alist **lstb, int digits)
{
	while (ft_lstsize2(*lsta) > 3)
	{
		if ((*lsta)->index != 0 && (*lsta)->index != 1)
		{
			if ((count_index_pos(lsta, 0) <= (digits / 2))
				|| (count_index_pos(lsta, 1) <= (digits / 2)))
				ft_ra(lsta);
			else
				ft_rra(lsta);
		}
		if (((*lsta)->index == 0) || ((*lsta)->index == 1))
			ft_pb(lsta, lstb);
	}
	if (!nums_ordered(lsta))
		ft_sort_three(lsta);
	if (nums_ordered(lstb))
		ft_sb(lstb);
	ft_pa(lstb, lsta);
	ft_pa(lstb, lsta);
}
