/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 20:07:07 by gateixei          #+#    #+#             */
/*   Updated: 2022/02/22 22:55:55 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

char	**ft_split(char const *s, char c)
{
	char	*str;
	char	**rtn;
	int		i;
	int		j;

	j = 0;
	i = 0;
	str = (char *) s;
	while (str[j] != NULL)
	{
		if (str[j] == c)
		{
			while (str[j] == c)
				j++;
			i--;
		}
		else	
			while (str[j] != c && str[j] != NULL)
				j++;
		i++;		
	}
	printf("%d", i);
//	rtn = (char **) malloc(i * sizeof(char *));
//	if (rtn == 0)
//		return (NULL);
//	ptr = str;
//	while (ptr != NULL)
//	{
//		str = ptr;
//		if (ptr[0] == c)
//		{

	return (NULL);
}

int	main(void)
{
	char	str[] = "zzzzzzzzzzzzzAAzzzzzzzAAAA";

	ft_split(str, 'A');
	return (0);
}
