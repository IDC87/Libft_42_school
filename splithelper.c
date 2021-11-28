/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splithelper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivda-cru <ivda-cru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 12:29:39 by ivda-cru          #+#    #+#             */
/*   Updated: 2021/11/28 14:49:00 by ivda-cru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 char *number_of_tokens(char const *s, char delimeter)
 {
      int i;
    int j;   
    int len = 0;
    int token_count;
    char words;
    int count_pos[];

    i = 0;
    token_count = 0;
    while (s[i] != '\0')
    {
        if (s[i] == delimeter)
        len = 0;
        else if(++len == 1)
        {
        token_count++;
        }        
        i++;
    }

    //printf("\n\n%s\n\n", words);
    return(words);

 }

char *ft_split(char const *s )//char c)
{
  char *arr;
  
  int i;
  int lines;
  int columns;
  char delimeter = ' ';

     i = 0;
    lines = 0;
    columns = 0;
    
    //lines = number_of_tokens(s, delimeter);
    //printf("\n\n %d \n\n", lines);

    printf("\n\n %s \n\n", number_of_tokens(s, delimeter));

    

    return(arr);
}



 int main (int argc, char **argv)
{
    printf("\n\n %s \n\n", ft_split("Returns an array of strings"));
    return (0);
}