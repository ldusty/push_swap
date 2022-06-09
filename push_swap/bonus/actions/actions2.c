/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldusty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:14:57 by ldusty            #+#    #+#             */
/*   Updated: 2022/03/10 15:14:59 by ldusty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ft_pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;

	if (*stack_b)
	{
		temp = (*stack_b)->next;
		(*stack_b)->next = *stack_a;
		*stack_a = *stack_b;
		*stack_b = temp;
	}
}

void	ft_rb(t_stack **stack_b)
{
	t_stack	*temp;

	if ((*stack_b) == NULL || (*stack_b)->next == NULL)
		return ;
	temp = (*stack_b)->next;
	(*stack_b)->next = NULL;
	lst_add_back(&temp, *stack_b);
	*stack_b = temp;
}

void	ft_pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;

	if (*stack_a)
	{
		temp = (*stack_a)->next;
		(*stack_a)->next = *stack_b;
		*stack_b = *stack_a;
		*stack_a = temp;
	}
}

void	ft_sb(t_stack **stack_b)
{
	t_stack	*temp;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	temp = (*stack_b)->next;
	(*stack_b)->next = temp->next;
	temp->next = *stack_b;
	*stack_b = temp;
}
