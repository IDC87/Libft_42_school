/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivda-cru <ivda-cru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:34:01 by ivda-cru          #+#    #+#             */
/*   Updated: 2021/11/09 15:25:24 by ivda-cru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n) //atencao que no man a variavel esta como *dest
{
    size_t i;
    char *tempdst;
    const char *tempsrc;

    if (dst == 0 && src == 0)
    return (0);

    i = 0;
    tempdst = dst;
    tempsrc = src;

    while (i < n)
    {
        tempdst[i] = tempsrc[i];
        i++;
    }
    return(dst);   

}



