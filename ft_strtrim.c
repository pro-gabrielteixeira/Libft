/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:02:16 by gateixei          #+#    #+#             */
/*   Updated: 2022/02/17 22:30:16 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		count(char const *s1, char const *set, int i, int c, int z);
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	int		i;
	int		c;
	int		z;
	char	*temp;

	temp = (char *) s1;
	i = 0;
	c = 0;
	z = ft_strlen(s1);
	count(s1, set, i, c, z);
	new_str = (char *) malloc((z - i) * (sizeof(char)) + 1);
	while (i != z)
		new_str = &temp[i++];
	new_str[i] = '\0';
	return (new_str);
}

int		count(char const *s1, char const *set, int i, int c, int z)
{
	while (set[c] != '\0')
	{
		if (set[c] == s1[i])
		{
			i++;
			c = 0;
		}
		else
			c++;
	}
	c = 0;
	while (set[c] != '\0')
	{
		if (set[c] == s1[z])
		{
			z--;
			z = 0;
		}
		else
			c++;
	}
	return (0);
}
