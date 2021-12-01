/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:26:46 by gateixei          #+#    #+#             */
/*   Updated: 2021/12/01 19:31:19 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, int size)
{
	unsigned char	*temp;
	int				c;

	c = 0;
	temp = (unsigned char *) dst;
	while (c < size)
	{
		temp[c] = ((unsigned char *) src)[c];
		c++;
	}
	return (dst);
}
