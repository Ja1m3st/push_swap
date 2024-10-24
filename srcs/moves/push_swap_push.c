/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimesan <jaimesan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:35:06 by jaimesan          #+#    #+#             */
/*   Updated: 2024/10/23 13:24:42 by jaimesan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_push(t_alist **lsta, t_alist **lstb)
{
	t_alist	*tmp;

	if (*lstb)
	{
		tmp = (*lstb);
		*lstb = (*lstb)->next;
		tmp->next = *lsta;
		*lsta = tmp;
	}
}

void	ft_pa(t_alist **lsta, t_alist **lstb)
{
	ft_push(lsta, lstb);
	write(1, "pa\n", 3);
}

void	ft_pb(t_alist **lsta, t_alist **lstb)
{
	ft_push(lstb, lsta);
	write(1, "pb\n", 3);
}
