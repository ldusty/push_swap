/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldusty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:07:17 by ldusty            #+#    #+#             */
/*   Updated: 2021/11/13 06:46:54 by ldusty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

int	ft_atoi(const char *str)
{
	int64_t	num;
	int64_t	num2;
	int		sign;
	int		i;

	num = 0;
	num2 = 0;
	sign = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -sign;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i++] - '0');
		num2++;
		if (num2 > 10 || (num * sign) > INT_MAX || (num * sign) < INT_MIN)
			ft_error();
	}
	return (num * sign);
}
