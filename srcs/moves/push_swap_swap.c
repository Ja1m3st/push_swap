/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimesan <jaimesan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 12:39:06 by jaimesanche       #+#    #+#             */
/*   Updated: 2024/10/23 13:23:52 by jaimesan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swap(t_alist **lsta)
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
	ft_swap(lsta);
	write(1, "sa\n", 3);
}

void	ft_sb(t_alist **lstb)
{
	ft_swap(lstb);
	write(1, "sb\n", 3);
}

void	ft_ss(t_alist **lsta, t_alist **lstb)
{
	ft_swap(lsta);
	ft_swap(lstb);
	write(1, "ss\n", 3);
}
