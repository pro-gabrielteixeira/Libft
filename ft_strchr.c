/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 18:15:36 by gateixei          #+#    #+#             */
/*   Updated: 2021/12/06 18:29:47 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	char	*ptr;
	int		i;

	i = 0;
	ch = c - '0';
	ptr = (char *) s;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			return (&ptr[i]);
		else
			i++;
	}
	if (s[i] == ch)
		return (&ptr[i]);
	return (NULL);
}
