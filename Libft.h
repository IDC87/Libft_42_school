/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LIBFT.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivda-cru <ivda-cru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:46:44 by ivda-cru          #+#    #+#             */
/*   Updated: 2021/11/09 17:12:24 by ivda-cru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>      //APAGAR DEPOIS O QUE NAO INTERESSA
#include <ctype.h>
#include <string.h>


int	ft_isalpha(int c);

int ft_isdigit(int c);

int ft_isalnum(int c);

int ft_isascii(int c);

int ft_isprint(int c);

size_t ft_strlen(const char *s);

void *ft_memset(void *b, int c, size_t len);

void ft_bzero(void *s, size_t n);

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

void *memmove(void *dst, const void *src, size_t len);

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int ft_toupper(int c);

int ft_tolower(int c);

char *ft_strchr(const char *s, int c);

char *ft_strrchr(const char *s, int c);

int	ft_strncmp(char *s1, char *s2, unsigned int n);

void *ft_memchr(const void *s, int c, size_t n);

int ft_memcmp(const void *s1, const void *s2, size_t n);

char 	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int	ft_atoi(char *str);

void *ft_calloc(size_t nmeb, size_t size);

char *strdup(const char *s);



































#endif