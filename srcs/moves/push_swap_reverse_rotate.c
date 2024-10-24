/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_reverse_rotate.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimesan <jaimesan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:11:02 by jaimesan          #+#    #+#             */
/*   Updated: 2024/10/23 13:24:29 by jaimesan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_reverse_rotate(t_alist **lst)
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
	ft_reverse_rotate(lsta);
	write(1, "rra\n", 4);
}

void	ft_rrb(t_alist **lstb)
{
	ft_reverse_rotate(lstb);
	write(1, "rrb\n", 4);
}

void	ft_rrr(t_alist **lsta, t_alist **lstb)
{
	if (lsta && (*lsta)->next)
		ft_reverse_rotate(lsta);
	if (lstb && (*lstb)->next)
		ft_reverse_rotate(lstb);
	write(1, "rrr\n", 4);
}
