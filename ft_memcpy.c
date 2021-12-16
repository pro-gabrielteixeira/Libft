/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:26:46 by gateixei          #+#    #+#             */
/*   Updated: 2021/12/16 12:49:12 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*temp;
	int				c;

	c = 0;
	if (!dst && !src && !src)
		return (0);
	temp = (unsigned char *) dst;
	while ((size_t) c < n)
	{
		temp[c] = ((unsigned char *) src)[c];
		c++;
	}
	return (dst);
}
