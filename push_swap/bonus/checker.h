/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldusty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:14:57 by ldusty            #+#    #+#             */
/*   Updated: 2022/03/10 15:14:59 by ldusty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include "../libft/libft.h"

typedef struct s_stack
{
	int				content;
	int				index;
	int				flag;
	struct s_stack	*next;
}	t_stack;

int		fill_input(char **argv, char **input);
int		input_error(char **input, int argc);
int		if_sort(int argc, t_stack **stack, t_stack **stack_b);
char	**calloc_mem(char **argv, char **input);
void	read_input(t_stack **stack_a, t_stack **stack_b);

t_stack	*lst_new(long content);
void	lst_add_back(t_stack **head, t_stack *new);
t_stack	*fill_list(int argc, char **input);
void	lst_free(t_stack **stack);

void	ft_exit(char **input);
void	free_split(char **split);

void	ft_sa(t_stack **stack_a);
void	ft_sb(t_stack **stack_b);
void	ft_ra(t_stack **stack_a);
void	ft_rra(t_stack **stack_a);
void	ft_pb(t_stack **stack_a, t_stack **stack_b);
void	ft_pa(t_stack **stack_a, t_stack **stack_b);
void	ft_rb(t_stack **stack_b);
void	ft_rrb(t_stack **stack_b);
void	ft_rr(t_stack **stack_a, t_stack **stack_b);
void	ft_ss(t_stack **stack_a, t_stack **stack_b);
void	ft_rrr(t_stack **stack_a, t_stack **stack_b);

#endif