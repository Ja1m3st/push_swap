/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_rotate_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimesan <jaimesan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:35:52 by jaimesan          #+#    #+#             */
/*   Updated: 2024/10/24 11:50:33 by jaimesan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static void	ft_rotate_bonus(t_alist **lst)
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
	ft_rotate_bonus(lsta);
}

void	ft_rb(t_alist **lstb)
{
	if (*lstb && (*lstb)->next)
	{
		ft_rotate_bonus(lstb);
	}
}

void	ft_rr(t_alist **lsta, t_alist **lstb)
{
	ft_rotate_bonus(lsta);
	ft_rotate_bonus(lstb);
}
