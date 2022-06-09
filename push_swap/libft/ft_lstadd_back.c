/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldusty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 18:18:21 by ldusty            #+#    #+#             */
/*   Updated: 2021/06/15 18:18:24 by ldusty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if ((!alst) || (!new))
		return ;
	if (!*alst)
		*alst = new;
	else
		ft_lstlast(*alst)->next = new;
}
