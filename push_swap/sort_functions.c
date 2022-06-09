/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_functions1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldusty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:14:57 by ldusty            #+#    #+#             */
/*   Updated: 2022/03/10 15:14:59 by ldusty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	if_sort(int argc, t_stack **stack)
{
	t_stack	*temp;
	int		i;

	i = 0;
	temp = *stack;
	while (temp)
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

void	sort(int argc, t_stack **stack_a, t_stack **stack_b)
{
	if (argc <= 5)
		small_sort(argc, stack_a, stack_b);
	else if (argc <= 100)
		big_sort(stack_a, stack_b, 15);
	else
		big_sort(stack_a, stack_b, 30);
}
