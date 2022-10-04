/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:33:05 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/04 16:42:16 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdarg.h>

int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int	    ft_isdigit(int c);
int     ft_isprint(int c);
int     ft_atoi(const char *str);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
int     ft_toupper(int c);
int     ft_tolower(int c);
size_t  ft_strlen(const char *s);
char    *ft_strrchr(const char *s, int c);//kontrol et
char    *ft_strchr(const char *s, int c);//kontrol
size_t  ft_strlcat(char *dest, const char *src, size_t size);
char    *ft_strdup(const char *s1);
char    *ft_strnstr(const char *big, const char *little, size_t len);
void    *ft_memset(void *s, int c, size_t n);
size_t  ft_strlcpy(char *dest, const char *src, size_t size);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);//kontrol
void    *ft_memmove(void *dest, const void *src, size_t len);//yapmadım
void    *ft_memchr(const void *s, int c, size_t n);// olmadı
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_calloc(size_t count, size_t size);

#endif
