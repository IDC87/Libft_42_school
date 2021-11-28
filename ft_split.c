/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:13:45 by marvin            #+#    #+#             */
/*   Updated: 2021/11/24 17:13:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"

 int number_of_tokens(char const *s, char delimeter)
 {
      int i;
    int j;   
    int len = 0;
    int token_count;

    i = 0;
    token_count = 0;
    while (s[i] != '\0')
    {
        if (s[i] == delimeter)
        len = 0;
        else if(++len == 1)
        token_count++;        
        i++;
    }
    return(token_count);

 }

char **ft_split(char const *s )//char c)
{
  char **arr;
  int i;
  int lines;
  int columns;
  char delimeter = ' ';

     i = 0;
    lines = 0;
    columns = 0;
    
    lines = number_of_tokens(s, delimeter);
    //printf("\n\n %d \n\n", lines);

    // tambem da para usar calloc em principio. Para arrays ate e melhor
    // arr = (char**)calloc(n, sizeof(char *))
 

    arr = (char **)malloc(sizeof(char *) * lines); 
    while(i < lines)
    {
        arr[i] = (char*)malloc(sizeof(char) * columns);
        i++;
    } 



 
//para fazer o free fazer o mesmo para a alocacao mas comecar ao contrario, com o ciclo primeiro.
    return (**arr);

}

 int main (int argc, char **argv)
{
    printf("\n\n %s \n\n", ft_split("Returns an array of strings"));
    return (0);
}