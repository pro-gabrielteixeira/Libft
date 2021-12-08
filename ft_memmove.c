/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:30:18 by gateixei          #+#    #+#             */
/*   Updated: 2021/12/08 21:40:14 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, int len)
{
	char	*str1;
	char	*str2;
	int		c;

	c = 0;
	str1 = (char *) dst;
	str2 = (char *) src;
	if ((ft_strlen(str1) + 1) <= len)
	{
	while (c < len)
		{
			if (str1[c] == '\0')
				str1[c++] = *str2;
			str1[c] = str2[c];
			c++;
		}
	}
	return ((void *) str1);
}
