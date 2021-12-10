/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:05:12 by gateixei          #+#    #+#             */
/*   Updated: 2021/12/10 19:57:21 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, int n)
{
	int		l;
	int		c;
	char	*source;

	c = 0;
	l = (ft_strlen(dst));
	source = (char *) src;
	if (ft_strlen(dst) < n)
	{
		while (src[c] != '\0' && c < (n - l - 1))
			*(dst++ + l) = src[c++];
		*(dst + l) = '\0';
		return (l + ft_strlen(source));
	}
	else
		return (ft_strlen(source) + n);
}
