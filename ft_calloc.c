/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:06:58 by gateixei          #+#    #+#             */
/*   Updated: 2021/12/14 19:19:44 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	int				c;

	c = 0;
	ptr = (unsigned char *) malloc(count * size);
	while ((size_t) c <= (size * count))
		ptr[c++] = '\0';
	return ((void *)ptr);
}
