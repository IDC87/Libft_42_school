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
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>      //APAGAR DEPOIS O QUE NAO INTERESSA
#include <ctype.h>
#include <string.h>

void ft_bzero(void *s, size_t n);

int ft_isalnum(int c);

int ft_isascii(int c);

int ft_isdigit(int c);

int ft_isprint(int c);

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

//void *memmove(void *dst, const void *src, size_t len);

void *ft_memset(void *b, int c, size_t len);

size_t ft_strlen(const char *s);


#endif