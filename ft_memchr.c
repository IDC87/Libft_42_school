/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivda-cru <ivda-cru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 14:53:37 by ivda-cru          #+#    #+#             */
/*   Updated: 2021/11/14 15:17:37 by ivda-cru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    char * ttr;

    ttr = (char *)s;
    i = 0;
    while (ttr[i] == '\0' && i < n)
    {
        if (ttr[i] == (char)c)
            return ((char *)ttr + i);
        i++;
    }
    return(NULL);
}

int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_memchr(str, ch, strlen(str));

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