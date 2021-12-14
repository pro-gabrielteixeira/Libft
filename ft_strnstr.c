/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 22:30:54 by gateixei          #+#    #+#             */
/*   Updated: 2021/12/14 21:23:43 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystake, const char *needle, size_t len)
{
	int		c;
	int		i;
	char	*str;

	i = 0;
	c = 0;
	str = (char *) haystake;
	if (needle[0] == 0)
		return (str);
	while (str[c] != '\0' && (size_t) c < len)
	{
		while (str[c++] == needle[i++] && (size_t) c <= len)
		{
			if (needle[i] == '\0')
				return (&str[c - i]);
			else if (str[c] != needle[i])
				c = c - (i + 1);
		}
		i = 0;
		c++;
	}
	return (0);
}
