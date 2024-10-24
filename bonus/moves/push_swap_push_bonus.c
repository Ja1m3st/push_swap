/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_push_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimesan <jaimesan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:35:06 by jaimesan          #+#    #+#             */
/*   Updated: 2024/10/24 13:40:51 by jaimesan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static void	ft_push_bonnus(t_alist **lsta, t_alist **lstb)
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
	ft_push_bonnus(lsta, lstb);
}

void	ft_pb(t_alist **lsta, t_alist **lstb)
{
	ft_push_bonnus(lstb, lsta);
}
