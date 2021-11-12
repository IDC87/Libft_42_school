/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivda-cru <ivda-cru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 18:12:32 by ivda-cru          #+#    #+#             */
/*   Updated: 2021/11/09 16:02:49 by ivda-cru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

void *ft_memmove(void *dst, const void *src, size_t n)  //atencao que no man a variavel esta como dest
{
    size_t i;
    char temp[n];

    i = 0;
    while (i < n)
    {
        temp[i] = ((unsigned char *)src)[i];
        i++;
    }

    i = 0;
    while (i < n)
    {
        ((unsigned char *)dst)[i] = temp[i];
        i++;
    }

    return(dst);
    
}

// Possivelmente esta mal, deve falhar em certos detalhes


int main ()
{
    char dest[] = "Aticleworld";
    const char src[]  = "Amlendra";

    //Source and destination before memmove
    printf("Before memmove >> dest = %s, src = %s\n\n", dest, src);
    ft_memmove(dest, src, 5);

    //Source and destination after memmove
    printf("After memmove >> dest = %s, src = %s\n\n", dest, src);
    return 0;
}

/* int main()
{
   //declaring and initializing character array
   char str1[ ] = "Learn C from trytoprogram.com";
   char str2[ ] = "trytoprogram.com";
   char str3[ ] = "Hello World !!!";

   //displaying str1, str2 and str3
   printf("str1 = %s\n", str1);
   printf("str2 = %s\n", str2);
   printf("str3 = %s\n", str3);

   ft_memmove(str1, str2, 12);
   ft_memmove(str3, &str3[6], 5); // MUITO UTIL ESTA UTILIZACAO

   printf("\nAfter using memmove,\n"
          "\nstr1 = %s\n"
          "\nstr3 = %s\n", str1, str3);

   return 0;
} //end */