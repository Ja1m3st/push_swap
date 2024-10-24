/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimesan <jaimesan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:13:56 by jaimesan          #+#    #+#             */
/*   Updated: 2024/10/24 15:56:29 by jaimesan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	t_alist	*a_node_list;
	t_alist	*b_node_list;	

	i = 1;
	a_node_list = NULL;
	b_node_list = NULL;
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
	ft_main_program(&a_node_list, &b_node_list);
	free_list(a_node_list);
	free_list(b_node_list);
	return (0);
}
