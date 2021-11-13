/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 19:21:52 by marvin            #+#    #+#             */
/*   Updated: 2021/11/13 19:21:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == (char)c)
        return ((char *)s + i);
        i++;
    }
    return (NULL);

}

// Parece afinal estar certo

