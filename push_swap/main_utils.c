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

#include "push_swap.h"

void	set_flag(t_stack **stack, int x)
{
	t_stack	*temp;

	temp = *stack;
	while (temp)
	{
		if (temp->next == NULL)
		{
			temp->flag = x;
			break ;
		}
		temp->flag = x;
		temp = temp->next;
	}
}

void	find_smallest(t_stack **stack, int x, int i)
{
	t_stack	*temp;

	temp = *stack;
	while (temp)
	{
		if (temp->content <= x && temp->flag != -1)
			x = temp->content;
		temp = temp->next;
	}
	temp = *stack;
	while (temp && temp->content != x)
	{
		temp = temp->next;
	}
	temp->index = i;
	temp->flag = -1;
}

void	indexing(int argc, t_stack **stack_a)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		find_smallest(stack_a, INT_MAX, i);
		i++;
	}
}

int	calloc_mem_help(char **argv, char **split, int i, int j)
{
	int	g;

	g = 0;
	while (argv[i])
	{
		if (!argv[i][j])
			ft_exit(NULL);
		split = ft_split(argv[i], ' ');
		if (!split)
			ft_exit(split);
		j = 0;
		while (split[j])
		{
			j++;
			g++;
		}
		j = 0;
		free_split(split);
		i++;
	}
	return (g);
}

char	**calloc_mem(char **argv, char **input)
{
	int		g;
	int		i;
	int		j;
	char	**split;

	split = NULL;
	i = 0;
	j = 0;
	g = calloc_mem_help(argv, split, i, j);
	input = ft_calloc(g, sizeof(char *));
	if (!input)
		ft_exit(input);
	return (input);
}
