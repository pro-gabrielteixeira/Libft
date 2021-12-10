/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 22:30:54 by gateixei          #+#    #+#             */
/*   Updated: 2021/12/10 22:57:04 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystake, const char *needle, int len)
{
	int		c;
	int		i;
	char	*str;

	i = 0;
	c = 0;
	str = (char *) haystake;
	if (needle[0] == 0)
		return (str);
	while (str[c] != '\0' && c < len)
	{
		if (str[c] == needle[i])
		{
			while (str[c++] == needle[i++] && c < len)
				if (needle[i] == '\0')
					return (&str[c - i]);
			c = c - i;
			i = 0;
		}
		c++;
	}
	return (0);
}
