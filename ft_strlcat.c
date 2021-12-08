/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:05:12 by gateixei          #+#    #+#             */
/*   Updated: 2021/12/08 19:16:43 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, int n)
{
	int		l;
	int		c;
	char	source;

	c = 0;
	l = (ft_strlen(dst) - 1);
	source = *(char *) src;
	if ((ft_strlen(dst) + ft_strlen(&source)) >= n)
	{
		while (l < n || src[c] != '\0')
			dst[l++] = src[c++];
		dst[l] = '\0';
		return (l + 1);
	}
	else
		return (ft_strlen(&source) + n);
}
