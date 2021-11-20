/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivda-cru <ivda-cru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 17:01:07 by ivda-cru          #+#    #+#             */
/*   Updated: 2021/11/20 15:55:26 by ivda-cru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        if (((const unsigned char *)s1)[i] != ((const unsigned char *)s2)[i])
            return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
        i++;
    }
    return (0);

}

/* int main()
{
    char *str1 = "DWgaOtP12df0";
    char *str2 = "DWGAOTP12DF0";
    int n = 0;

    printf("Diference between the two strings is: %d ", ft_memcmp(str1, str2, strlen(str1)));
    return (0);
} */