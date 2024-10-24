/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_swap_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimesan <jaimesan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 12:39:06 by jaimesanche       #+#    #+#             */
/*   Updated: 2024/10/24 11:50:28 by jaimesan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static void	ft_swap_bonus(t_alist **lsta)
{
	t_alist	*tmp;

	if (*lsta && (*lsta)->next)
	{
		tmp = *lsta;
		*lsta = (*lsta)->next;
		tmp->next = (*lsta)->next;
		(*lsta)->next = tmp;
	}
}

void	ft_sa(t_alist **lsta)
{
	ft_swap_bonus(lsta);
}

void	ft_sb(t_alist **lstb)
{
	ft_swap_bonus(lstb);
}

void	ft_ss(t_alist **lsta, t_alist **lstb)
{
	ft_swap_bonus(lsta);
	ft_swap_bonus(lstb);
}
