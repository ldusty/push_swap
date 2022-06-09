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

#include "../checker.h"

void	ft_rrr(t_stack **stack_a, t_stack **stack_b)
{
	ft_rra(stack_a);
	ft_rrb(stack_b);
}

void	ft_ss(t_stack **stack_a, t_stack **stack_b)
{
	ft_sa(stack_a);
	ft_sb(stack_b);
}

void	ft_rr(t_stack **stack_a, t_stack **stack_b)
{
	ft_ra(stack_a);
	ft_rb(stack_b);
}
