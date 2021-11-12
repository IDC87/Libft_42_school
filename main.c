/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivda-cru <ivda-cru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:57:47 by ivda-cru          #+#    #+#             */
/*   Updated: 2021/11/09 20:43:38 by ivda-cru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

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

        ft_memcpy(dst, src, n);

        printf("\n\nDESTINY FUNCTION AFTER: %s", dst);
 
        printf("\n\nSOURCE FUNCTION AFTER: %s", src);

        memcpy(dst, src, n);

        printf("\n\nORIGINAL DESTINY FUNCTION AFTER: %s", dst);
 
        printf("\n\nORIGINAL SOURCE FUNCTION AFTER: %s\n\n", src);
        
        //printf("\n\nFT_MEMCPY: %s %s %d", ft_memcpy(dst, src, n));
      
        //printf("\n   MEMCPY: %s %s %d\n\n", memcpy(dst, src, n));
        
    }
    return (0);
}
