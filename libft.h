/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gateixei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:18:59 by gateixei          #+#    #+#             */
/*   Updated: 2021/12/16 14:35:19 by gateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int		ft_isalnum(int c);

int		ft_isalpha(int c);

int		ft_isascii(int c);

int		ft_isdigit(int c);

int		ft_strlen(const char *str);

int		ft_atoi(const char *str);

void	ft_bzero(char *str, size_t n);

void	*ft_calloc(size_t count, size_t size);

int		ft_isprint(int c);

void	*ft_memcpy(void *dst, const void *src, size_t n);

void	*ft_memchr(const void *str, int c, size_t n);

int		ft_memcmp(const void *str1, const void *str2, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t len);

void	*ft_memset(void *b, int c, size_t len);

char	*ft_strchr(const char *s, int c);

char	*ft_strdup(const char *s1);

int		ft_strlcat(char *dst, const char *src, size_t dstsize);

int		ft_strlcpy(char *dst, const char *scr, size_t dstsize);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_strnstr(const char *haystake, const char *needle, size_t len);

char	*ft_strrchr(const char *s, int c);

int		ft_tolower(int c);

int		ft_toupper(int c);

char	*ft_substr(const char *s, unsigned int start, size_t len);

#endif
