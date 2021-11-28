/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:26:44 by gateixei          #+#    #+#             */
/*   Updated: 2021/11/28 20:49:32 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	result;
	int	neg;
	int	c;

	result = 0;
	neg = 1;
	c = 0;
	while (str[c] == ' ')
		c++;
	if (str[c] == '-')
	{
		neg = -1;
		c++;
	}
	else if (str[c] == '+')
		c++;
	while (str[c] >= '0' && str[c] <= '9')
	{
		result = (result * 10) + str[c] - '0';
		c++;
	}
	result = result * neg;
	return (result);
}
