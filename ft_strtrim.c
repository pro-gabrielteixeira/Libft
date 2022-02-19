/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:02:16 by gateixei          #+#    #+#             */
/*   Updated: 2022/02/18 16:04:54 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		count(char const *s1, char const *set, int i, int z);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	int		i;
	int		n;
	int		z;
	char	*temp;

	temp = (char *) s1;
	i = 0;
	n = 0;
	z = ft_strlen(s1) - 1;
	count(s1, set, i, z);
	if (i > z)
		i = z + 1;
	new_str = (char *) malloc((((z + 1) - i) + 1) * (sizeof(char)));
	while (i <= z)
		new_str[n++] = temp[i++];
	new_str[n] = '\0';
	return (new_str);
}

int	count(char const *s1, char const *set, int i, int z)
{
	int		c;

	c = 0;
	while (set[c++] == s1[i++])
	{
		if (set[c] == '\0')
			break;
		else if (set[c] != s1[i])
		{
			i = 0;
			break;
		}
	}
	c = ft_strlen(set) - 1;
	while (set[c--] == s1[z--])
	{
		if (c < 0)
			break;
		else if (set[c] != s1[z])
		{
			z = ft_strlen(s1) - 1;
			break;
		}
	}
	return (0);
}
