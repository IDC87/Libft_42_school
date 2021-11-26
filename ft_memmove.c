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

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)  //atencao que no man a variavel esta como dest
{
    size_t i;
    char *tempdst;
    const char *tempsrc;
    

    if(dst == 0 && src == 0)
    return(NULL);

    i = 0;


    if (dst <= src)
    {
        tempdst = dst;
        tempsrc = src;

        while (i < len)
        {
            tempdst[i] = tempsrc[i];
            i++;
        }
    }
    else 
    {
        tempdst = dst;
        tempsrc = src;   

        i = len - 1; // condicao para overlap. chega ao final da string.
        while (i < len)
    {
        ((unsigned char *)dst)[i] = tempsrc[i];
        i--;
    }
    }

    

    return(dst);
    
}

//The trick here is to use a temp array instead of directly copying from src to dest. 
//The use of temp array is important to handle cases when source and destination addresses are overlapping.

/* void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*temp;
	const char	*s;

	if (dst == 0)
		return (NULL);
	if (dst <= src)
	{
		temp = dst;
		s = src;
		while (len--)
			*temp++ = *s++;
	}
	else
	{
		temp = dst;
		temp += len;
		s = src;
		s += len;
		while (len--)
			*--temp = *--s;
	}
	return (dst);
}


void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;

	if (!dst && !src)
		return (0);
	i = 0;
	if ((size_t)dst - (size_t)src < len)
	{
		i = len - 1;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
} */

// Em principio este e o memcpy estao certos. ver nos testers!


/* int main ()
{
    char dest[] = "Aticleworld";
    const char src[]  = "Amlendra";

    //Source and destination before memmove
    printf("Before memmove >> dest = %s, src = %s\n\n", dest, src);
    ft_memmove(dest, src, 5);

    //Source and destination after memmove
    printf("After memmove >> dest = %s, src = %s\n\n", dest, src);
    return 0;
} */

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