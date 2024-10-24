/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_three.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimesan <jaimesan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:46:00 by jaimesan          #+#    #+#             */
/*   Updated: 2024/10/23 15:27:14 by jaimesan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_index_pos(t_alist **lsta, int content)
{
	int		counter;
	t_alist	*head;

	counter = 1;
	head = *lsta;
	while (head != NULL && head->index != content)
	{
		counter++;
		head = head->next;
	}
	return (counter);
}

int	nums_ordered(t_alist **lst)
{
	t_alist	*current;

	current = *lst;
	while (current && current->next)
	{
		if (current->content > current->next->content)
			return (0);
		current = current->next;
	}
	return (1);
}

void	print_list(t_alist *lst)
{
	while (lst)
	{
		ft_printf("%d ", lst->content);
		lst = lst->next;
	}
	ft_printf("\n");
}
