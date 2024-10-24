/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimesan <jaimesan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:03:48 by jaimesan          #+#    #+#             */
/*   Updated: 2024/10/24 13:23:13 by jaimesan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

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
void	print_list(t_alist *lst);
int		ft_check_arguments(char **argv, int i, t_alist **a_node_list);
void	free_list(t_alist *lst);
int		free_split(char **split);
int		nums_ordered(t_alist **lst);
t_alist	*ft_push_lstnew(int content);
void	ft_push_lstadd_back(t_alist **lst, t_alist *new);
int		free_split(char **split);
void	free_list(t_alist *lst);
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