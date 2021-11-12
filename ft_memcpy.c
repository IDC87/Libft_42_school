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

#include "Libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    int i;

    i = 0;
    if ((((unsigned char *)dst)[0] == '\0') && (((unsigned char *)src)[0] == '\0'))
    return (0);

    while (i < n)
    {
        ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
        i++;
    }

    return(dst);
    

}



