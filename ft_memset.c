/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:46:58 by gateixei          #+#    #+#             */
/*   Updated: 2021/12/06 18:22:22 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, int len)
{
	unsigned char	*str;
	int				i;

	i = 0;
	str = (unsigned char *) b;
	while (i < len)
		str[i++] = c - '0';
	return ((void *) &str[0]);
}
