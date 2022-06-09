/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldusty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:37:51 by ldusty            #+#    #+#             */
/*   Updated: 2021/12/16 17:37:59 by ldusty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*next_element;

	if (!lst)
		return (0);
	if (!lst->next)
		return (lst);
	next_element = lst->next;
	while (next_element->next)
		next_element = next_element->next;
	return (next_element);
}
