/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:18:41 by gateixei          #+#    #+#             */
/*   Updated: 2022/02/22 20:02:41 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		m;
	int		temp;

	temp = n;
	m = 1;
	if (temp < 0)
		m++;
	while (temp >= 10 || temp <= -10)
	{
		m++;
		temp = temp / 10;
	}
	temp = m;
	str = malloc((m + 1) * (sizeof(char)));
	while (m-- > 0)
	{
		if (n < 0 && m == 0)
		{
			str[m] = '-';
			break;
		}
		str[m] = n / 10 + '0';
		n = n / 10;
	}
	str[temp] = '\0';
	return (str);
}
