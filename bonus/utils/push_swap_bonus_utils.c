/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus_utils.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimesan <jaimesan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:06:10 by jaimesan          #+#    #+#             */
/*   Updated: 2024/10/24 13:40:57 by jaimesan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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

t_alist	*ft_push_lstnew(int content)
{
	t_alist	*node;

	node = malloc(sizeof(t_alist));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

void	ft_push_lstadd_back(t_alist **lst, t_alist *new)
{
	t_alist	*last;

	if (*lst)
	{
		last = *lst;
		while (last->next)
			last = last->next;
		last->next = new;
	}
	else if (*lst == NULL)
		*lst = new;
}

int	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (1);
}

void	free_list(t_alist *lst)
{
	t_alist	*temp;

	if (lst)
	{
		while (lst->next != NULL)
		{
			temp = lst;
			lst = lst->next;
			free(temp);
		}
		free(lst);
		lst = NULL;
	}
}
