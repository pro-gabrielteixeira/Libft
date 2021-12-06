/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:30:18 by gateixei          #+#    #+#             */
/*   Updated: 2021/12/06 17:43:46 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, int len)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				c;

	c = 0;
	str1 = (unsigned char *) dst;
	str2 = (unsigned char *) src;
	while (c < len)
	{
		str1[c] = str2[c];
		c++;
	}
	return ((void *) str1);
}
