/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivda-cru <ivda-cru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:34:01 by ivda-cru          #+#    #+#             */
/*   Updated: 2021/11/09 15:03:37 by ivda-cru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    char *dst1;
    char *src1;
    size_t i;

    dst1 = (char *) dst;
    src1 = (char *) src;
    i = 0;

    while (i < n)
    {
        dst1[i] = src1[i];
        i++;
    }

    return(dst1);

}

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        char *dst = argv[1];
        char *src = argv[2];
        size_t n = atoi(argv[3]);

        printf("\nSIZEOF SOURCE IS: %lu", sizeof(src));


        printf("\n\nDESTINY FUNCTION: %s", dst);
 
        printf("\n\nSOURCE FUNCTION: %s", src);

        printf("\n\nBYTES COPIED: ");
        printf("%zu", n);
        
        //printf("\n\nFT_MEMCPY: %s", ft_memcpy(dst, src, n));
      
        printf("\n   MEMCPY: %s\n\n", memcpy(dst, src, n));
        
    }
    return (0);
}