/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimesan <jaimesan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:03:10 by jaimesan          #+#    #+#             */
/*   Updated: 2024/10/24 16:40:30 by jaimesan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_check(t_alist **lsta, t_alist **lstb, char *buffer)
{
	if (ft_strncmp(buffer, "sa\n", 3) == 0)
		ft_sa(lsta);
	else if (ft_strncmp(buffer, "sb\n", 3) == 0)
		ft_sb(lstb);
	else if (ft_strncmp(buffer, "ss\n", 3) == 0)
		ft_ss(lsta, lstb);
	else if (ft_strncmp(buffer, "pa\n", 3) == 0)
		ft_pa(lsta, lstb);
	else if (ft_strncmp(buffer, "pb\n", 3) == 0)
		ft_pb(lsta, lstb);
	else if (ft_strncmp(buffer, "ra\n", 3) == 0)
		ft_ra(lsta);
	else if (ft_strncmp(buffer, "rb\n", 3) == 0)
		ft_rb(lstb);
	else if (ft_strncmp(buffer, "rr\n", 3) == 0)
		ft_rr(lsta, lstb);
	else if (ft_strncmp(buffer, "rra\n", 4) == 0)
		ft_rra(lsta);
	else if (ft_strncmp(buffer, "rrb\n", 4) == 0)
		ft_rrb(lstb);
	else if (ft_strncmp(buffer, "rrr\n", 4) == 0)
		ft_rrr(lsta, lstb);
	else
		return (0);
	return (1);
}

void	put_movs(t_alist **lsta, t_alist **lstb)
{
	char	*buffer;

	buffer = get_next_line(0);
	while (buffer != NULL)
	{
		if (ft_check(lsta, lstb, buffer) == 0 && buffer[0] != '\n')
		{
			write(1, "Error\n", 6);
			free(buffer);
			break ;
		}
		else if (buffer[0] == '\n')
		{
			write(1, "\033[A", 4);
			if (nums_ordered(lsta) && *lstb == NULL)
				write(1, "OK\n", 3);
			else
				write(1, "KO\n", 3);
			free(buffer);
			break ;
		}
		free(buffer);
		buffer = get_next_line(0);
	}
}

int	main(int argc, char **argv)
{
	int		i;
	t_alist	*a_node_list;
	t_alist	*b_node_list;	

	i = 1;
	a_node_list = NULL;
	b_node_list = NULL;
	if (argc < 2)
		return (0);
	while (argc > i)
	{
		if (ft_check_arguments(argv, i, &a_node_list))
		{
			free_list(a_node_list);
			free_list(b_node_list);
			return (write(1, "Error\n", 6));
		}
		i++;
	}
	put_movs(&a_node_list, &b_node_list);
	free_list(a_node_list);
	free_list(b_node_list);
	return (0);
}
