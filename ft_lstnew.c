/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 20:24:30 by gateixei          #+#    #+#             */
/*   Updated: 2022/03/08 21:20:59 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*start;
	t_list	*curr;
	t_list	new;

	start = &new;
	start = (t_list *) malloc(sizeof(t_list));
	start->content = content;
	curr = start->next;
	curr = 0;
	return (start);
}
