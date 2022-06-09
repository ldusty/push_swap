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

#include "checker.h"

int	if_sort(int argc, t_stack **stack, t_stack **stack_b)
{
	t_stack	*temp;
	int		i;

	i = 0;
	temp = *stack;
	while (temp && *stack_b == NULL)
	{
		if (temp->next != NULL && temp->content < temp->next->content)
		{
			temp = temp->next;
			i++;
		}
		else if (temp->next == NULL)
		{
			i++;
			if (i == argc)
				return (1);
		}
		else
			break ;
	}
	return (0);
}

int	calloc_mem_utils(char **argv, char **split, int i, int j)
{
	int	g;

	g = 0;
	while (argv[i])
	{
		if (argv[i][j] == '\0')
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
	g = calloc_mem_utils(argv, split, i, j);
	input = ft_calloc(g, sizeof(char *));
	if (!input)
		ft_exit(input);
	return (input);
}
