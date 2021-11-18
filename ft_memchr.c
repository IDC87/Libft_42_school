/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 14:53:37 by ivda-cru          #+#    #+#             */
/*   Updated: 2021/11/18 18:27:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//igual a strchr mas procura se nos primeiros n bytes existe o char a encontrar. Returna Null caso nao encontre

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
        
    i = 0;
    while (i < n)
    {
        if (((unsigned char *)s)[i] == (unsigned char)c)
            return ((void *)s + i);
        i++;
    }
    return(NULL);
}

int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_memchr(str, ch, 11);

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}





/* int main(void)
{
  const char *str = "Try not. Do, or do not. There is no try.";
  char target = 'T';
  const char *result = str;
  size_t a = 3;

 
  while((result = ft_memchr(result, target, a)) != NULL) {
    printf("Found '%c' starting at '%p'\n", target, result);
    ++result; // Increment result, otherwise we'll find target at the same location
  }
} */