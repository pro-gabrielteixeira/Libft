/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 18:51:49 by gateixei          #+#    #+#             */
/*   Updated: 2021/12/06 19:27:40 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*strdup(const char *s1)
{
	char	*str;
	int		i;
	int		c;

	c = 0;
	i = ft_strlen((char *) s1);
	str = (char *) malloc(i + 1);
	while (c != '\0')
	{
		str[c] = s1[c];
		c++;
	}
	str[c] = '\0';
	return (str);
}
