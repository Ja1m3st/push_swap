/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimesan <jaimesan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:20:31 by jaimesan          #+#    #+#             */
/*   Updated: 2024/10/23 15:22:32 by jaimesan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_alist **lsta)
{
	int	a;
	int	b;
	int	c;

	a = (*lsta)->content;
	b = (*lsta)->next->content;
	c = (*lsta)->next->next->content;
	if (a > b && b > c)
	{
		ft_sa(lsta);
		ft_rra(lsta);
	}
	else if (a > b && a > c)
		ft_ra(lsta);
	else if (a > b && b < c)
		ft_sa(lsta);
	else if (a < b && a < c && b > c)
	{
		ft_sa(lsta);
		ft_ra(lsta);
	}
	else if (a < b && b > c)
		ft_rra(lsta);
}
