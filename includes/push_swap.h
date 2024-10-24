/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimesan <jaimesan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 08:55:41 by jaimesan          #+#    #+#             */
/*   Updated: 2024/10/24 10:52:28 by jaimesan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "ft_printf.h"
# include "get_next_line.h"
# include <unistd.h>
# include <stdio.h>

typedef struct t_list
{
	int				content;
	int				index;
	struct t_list	*next;
}	t_alist;

int		main(int argc, char **argv);
void	ft_main_program(t_alist **lsta, t_alist **lstb);
void	ft_push_lstadd_back(t_alist **lst, t_alist *new);
int		ft_check_arguments(char **argv, int i, t_alist **a_node_list);
t_alist	*ft_push_lstnew(int content);
void	free_list(t_alist *lst);
int		free_split(char **split);
int		ft_isnumber(char *str);
int		ft_lstsize2(t_alist *lst);
int		count_index_pos(t_alist **lsta, int content);
int		nums_ordered(t_alist **lst);
void	print_list(t_alist *lst);

void	ft_sort_three(t_alist **lsta);
void	ft_sort_four(t_alist **lsta, t_alist **lstb, int count_nums);
void	ft_sort_five(t_alist **lsta, t_alist **lstb, int digits);
void	ft_sort_more(t_alist **lsta, t_alist **lstb, int count_nums);

int		ft_is_duplicate(t_alist *a_node_list, int content);

int		ft_sqrt(int number);
void	ft_sa(t_alist **lsta);
void	ft_sb(t_alist **lstb);
void	ft_ss(t_alist **lsta, t_alist **lstb);
void	ft_pa(t_alist **lsta, t_alist **lstb);
void	ft_pb(t_alist **lsta, t_alist **lstb);
void	ft_ra(t_alist **lsta);
void	ft_rb(t_alist **lstb);
void	ft_rr(t_alist **lsta, t_alist **lstb);
void	ft_rra(t_alist **lsta);
void	ft_rrb(t_alist **lstb);
void	ft_rrr(t_alist **lsta, t_alist **lstb);

#endif