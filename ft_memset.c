/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivda-cru <ivda-cru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 13:00:09 by ivda-cru          #+#    #+#             */
/*   Updated: 2021/11/09 15:25:57 by ivda-cru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *str;
    size_t i;

    str = (unsigned char *)b;
    i = 0;
    while (str[i] != '\0' && i < len)
    {
        str[i] = c;
        i++;
    }
    return(str);
}

int main(int argc, char **argv)
{
    if(argc > 1)
    {
        char *str1 = argv[1];
        printf("%s\n", ft_memset(str1, '#', 6));
    }
    printf("\n");
    

    return (0);
}