/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main_program.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimesan <jaimesan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 08:59:43 by jaimesan          #+#    #+#             */
/*   Updated: 2024/10/24 16:24:03 by jaimesan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_arguments(char **argv, int i, t_alist **a_node_list)
{
	int		j;
	char	**split;
	t_alist	*node;

	j = -1;
	if (argv[i][0] == '\0')
		return (1);
	split = ft_split(argv[i], ' ');
	while (split[++j])
	{
		if (ft_isnumber(split[j]))
		{
			if (ft_is_duplicate(*a_node_list, ft_atoi(split[j]))
				|| (ft_atoi(split[j]) < -2147483648
					|| ft_atoi(split[j]) > 2147483647))
				return (free_split(split));
			node = ft_push_lstnew(ft_atoi(split[j]));
			if (!node)
				return (free_split(split));
			ft_push_lstadd_back(a_node_list, node);
		}
		else
			return (free_split(split));
	}
	return (free_split(split), 0);
}

void	ft_get_index(t_alist **lsta)
{
	t_alist	*current;
	t_alist	*temp;
	ssize_t	count;

	current = *lsta;
	while (current != NULL)
	{
		count = 0;
		temp = *lsta;
		while (temp != NULL)
		{
			if (current->content > temp->content)
				count++;
			temp = temp->next;
		}
		current->index = count;
		current = current->next;
	}
}

void	ft_main_program(t_alist **lsta, t_alist **lstb)
{
	int	count_nums;

	count_nums = ft_lstsize2(*lsta);
	ft_get_index(lsta);
	if (!nums_ordered(lsta))
	{
		if (count_nums == 3)
			ft_sort_three(lsta);
		else if (count_nums == 4)
			ft_sort_four(lsta, lstb, count_nums);
		else if (count_nums == 5)
			ft_sort_five(lsta, lstb, count_nums);
		else
			ft_sort_more(lsta, lstb, count_nums);
	}
}
