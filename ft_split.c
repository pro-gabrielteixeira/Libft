/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 20:07:07 by gateixei          #+#    #+#             */
/*   Updated: 2022/03/02 16:37:07 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

int	str_count(char *str, char c)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (str[j] != '\0')
	{
		if (str[j] == c)
		{
			while (str[j] == c)
				j++;
			i--;
		}
		else	
			while (str[j] != c && str[j] != '\0')
				j++;
		i++;		
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	*str;
	char	**rtn;
	int		k;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	str = (char *) s;
	i = str_count(str, c);
	rtn = (char **) malloc((i + 1) * sizeof(char *));
	j = 0;
	k = 0;
	while (k < i)
	{
		while (str[0] == c)
			str++;
		while (str[j] != c)
			j++;
		if (str)
			rtn[k++] = ft_substr(str, 0, j);
		str = &str[j];
		j = 0;
	}
	rtn[i] = NULL;
	return (rtn);
}
