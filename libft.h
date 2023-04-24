/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:01:53 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/04/24 17:12:30 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFT_H_
#define _LIBFT_H_

#include<stdio.h>
#include<stdlib.h> 

int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
size_t  ft_strlen(const char *s);
void    *ft_memset(void *b, int c, size_t len);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
int     ft_toupper(int c);
int     ft_tolower(int c);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
int     ft_atoi(const char *str);
int     strncmp(const char *first, const char *second, size_t length);
void    *calloc(size_t nmemb, size_t size);
char    *strdup(const char *s);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);

#endif 