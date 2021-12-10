/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:30:18 by gateixei          #+#    #+#             */
/*   Updated: 2021/12/10 17:01:01 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, int len)
{
	unsigned char	*str1;
	unsigned char	*buf;
	int				c;

	c = 0;
	buf = (unsigned char *) src;
	str1 = (unsigned char *) dst;
	if ((buf < str1) && (str1 < (buf + len)))
		while (--len >= 0)
			str1[len] = buf[len];
	else
	{
		while (c < len)
		{
			str1[c] = buf[c];
			c++;
		}
	}
	return ((void *) str1);
}
