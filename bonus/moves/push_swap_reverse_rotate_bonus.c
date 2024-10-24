/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_reverse_rotate_bonus.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimesan <jaimesan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:11:02 by jaimesan          #+#    #+#             */
/*   Updated: 2024/10/24 13:38:20 by jaimesan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static void	ft_reverse_rotate_bonus(t_alist **lst)
{
	t_alist	*last;
	t_alist	*pe_last;

	if (*lst == NULL || (*lst)->next == NULL)
		return ;
	last = *lst;
	pe_last = NULL;
	while (last->next != NULL)
	{
		pe_last = last;
		last = last->next;
	}
	pe_last->next = NULL;
	last->next = *lst;
	*lst = last;
}

void	ft_rra(t_alist **lsta)
{
	ft_reverse_rotate_bonus(lsta);
}

void	ft_rrb(t_alist **lstb)
{
	ft_reverse_rotate_bonus(lstb);
}

void	ft_rrr(t_alist **lsta, t_alist **lstb)
{
	if (lsta && (*lsta)->next)
		ft_reverse_rotate_bonus(lsta);
	if (lstb && (*lstb)->next)
		ft_reverse_rotate_bonus(lstb);
}
