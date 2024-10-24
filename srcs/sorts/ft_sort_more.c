/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_more.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimesan <jaimesan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:40:10 by jaimesan          #+#    #+#             */
/*   Updated: 2024/10/24 10:19:25 by jaimesan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	const_pass_to_b(t_alist **lsta, t_alist **lstb, int count_nums)
{
	int	i;
	int	range;

	i = 0;
	range = ft_sqrt(count_nums);
	while (*lsta)
	{
		if ((*lsta)->index <= i)
		{
			ft_pb(lsta, lstb);
			if (count_nums > 1)
				ft_rb(lstb);
			i++;
		}
		else if ((*lsta)->index <= i + range)
		{
			ft_pb(lsta, lstb);
			i++;
		}
		else
			ft_ra(lsta);
	}
}

int	count_max_rotations(t_alist *lstb, int max_index)
{
	int	counter;

	counter = 0;
	while (lstb != NULL && lstb->index != max_index)
	{
		lstb = lstb->next;
		counter++;
	}
	return (counter);
}

void	ft_sort_more(t_alist **lsta, t_alist **lstb, int count_nums)
{
	int	count_rb;
	int	count_rrb;

	const_pass_to_b(lsta, lstb, count_nums);
	while (count_nums > 0)
	{
		count_rb = count_max_rotations(*lstb, (count_nums - 1));
		count_rrb = count_nums - count_rb;
		if (count_rb <= count_rrb)
		{
			while ((*lstb)->index != (count_nums - 1))
				ft_rb(lstb);
			ft_pa(lsta, lstb);
			count_nums--;
		}
		else
		{
			while ((*lstb)->index != (count_nums - 1))
				ft_rrb(lstb);
			ft_pa(lsta, lstb);
			count_nums--;
		}
	}
}
