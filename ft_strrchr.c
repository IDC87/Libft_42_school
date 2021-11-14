/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivda-cru <ivda-cru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 13:43:37 by ivda-cru          #+#    #+#             */
/*   Updated: 2021/11/14 14:49:27 by ivda-cru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    char *last;

    i= 0;
    last = NULL; //Null para identificar pointer

    while (s[i] != '\0')
    {
        if (s[i] == (char)c)
            last = (char *)s + i; //so se retorna o valor no final, assim garante se que e o ultimo char a ser encontrado
        i++;        
    }
    if (c == '\0')
        last = (char *)s + i;
    return(last);

}
int main(void)
{
  const char *str = "Try not. Do, or do not. There is no try.";
  char target = 'T';
  const char *result = str;
 
  while((result = ft_strrchr(result, target)) != NULL) {
    printf("Found '%c' starting at '%s'\n", target, result);
    ++result; // Increment result, otherwise we'll find target at the same location
  }
}