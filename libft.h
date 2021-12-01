/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:18:59 by gateixei          #+#    #+#             */
/*   Updated: 2021/12/01 20:28:26 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int		ft_isalnum(int c);

int		ft_isalpha(int c);

int		ft_isascii(int c);

int		ft_isdigit(int c);

int		ft_strlen(char *str);

int		ft_atoi(char *str);

void	ft_bzero(char *str, int size);

void	*ft_calloc(int count, int size);

int		ft_isprint(int c);

void	*ft_memcpy(void *dst, const void *src, int size);

void	*ft_memchr(const void *str, int c, int size);

#endif
