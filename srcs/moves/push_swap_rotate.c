/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimesan <jaimesan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:35:52 by jaimesan          #+#    #+#             */
/*   Updated: 2024/10/23 13:24:09 by jaimesan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_rotate(t_alist **lst)
{
	t_alist	*first;
	t_alist	*last;

	first = *lst;
	*lst = (*lst)->next;
	last = *lst;
	while (last->next)
		last = last->next;
	last->next = first;
	first->next = NULL;
}

void	ft_ra(t_alist **lsta)
{
	ft_rotate(lsta);
	write(1, "ra\n", 3);
}

void	ft_rb(t_alist **lstb)
{
	if (*lstb && (*lstb)->next)
	{
		ft_rotate(lstb);
		write(1, "rb\n", 3);
	}
}

void	ft_rr(t_alist **lsta, t_alist **lstb)
{
	ft_rotate(lsta);
	ft_rotate(lstb);
	write(1, "rr\n", 3);
}
