/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arguments_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimesan <jaimesan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:55:24 by jaimesan          #+#    #+#             */
/*   Updated: 2024/10/24 13:19:14 by jaimesan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_isnumber(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_duplicate(t_alist *a_node_list, int content)
{
	while (a_node_list)
	{
		if (a_node_list->content == content)
			return (1);
		a_node_list = a_node_list->next;
	}
	return (0);
}

int	ft_check_arguments(char **argv, int i, t_alist **a_node_list)
{
	int		j;
	char	**split;
	t_alist	*node;

	j = 0;
	if (argv[i][0] == '\0')
		return (1);
	split = ft_split(argv[i], ' ');
	while (split[j])
	{
		if (ft_isnumber(split[j]))
		{
			if (ft_is_duplicate(*a_node_list, ft_atoi(split[j])))
				return (1);
			node = ft_push_lstnew(ft_atoi(split[j]));
			if (!node)
				return (free_split(split));
			ft_push_lstadd_back(a_node_list, node);
		}
		else
			return (free_split(split));
		j++;
	}
	free_split(split);
	return (0);
}
