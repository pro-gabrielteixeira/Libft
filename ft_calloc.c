/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:06:58 by gateixei          #+#    #+#             */
/*   Updated: 2021/11/30 22:56:12 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(int count, int size)
{
	char	*ptr;
	int		c;

	c = 0;
	ptr = (char *) malloc(count * size);
	while (c <= (size * count))
		ptr[c++] = '0';
	return ((void *)ptr);
}
