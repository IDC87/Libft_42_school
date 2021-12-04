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

 static int number_of_tokens(char const *s, char delimeter)
 {
    int i;  
    int len;
    int token_count;   

    i = 0;
    len = 0;
    if (!(*s))
        return (0);    
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

char *token(char const *s, int columns, int index)
{
    char *token;
    int i;
    int token_pos;

    i = 0;
    token_pos = index - columns;

    
    token = (char *)malloc(sizeof(char) * (columns + 1));
    while(i <= columns)
    {
        token[i] = s[token_pos];
        i++;
        token_pos++;
    }
    token[i] = '\0';

   

    //printf("%s", token);

    return (token);
}

 char **ft_split(char const *s, char delimeter)
 {
     int rows;
     int columns;
     size_t i;
     char **words;   
     //printf("its doin something - 1\n");  

     //printf("\n\nNUMBER OF TOKENS IS: %d\n\n", number_of_tokens(s, delimeter));

     words = (char **)malloc(sizeof(char *) * (number_of_tokens(s, delimeter) + 1));

     

     //printf("its doin something - 2\n");
     
     rows = 0;
     columns = 0;
     i = 0;            

     while (i < ft_strlen(s) + 1)
     {
        // printf("its doin something s[%d] %c - 3\n", i, s[i]);
         if (s[i] == delimeter || s[i] == '\0')
         {
             //printf("its doin something - 6"); 
             words[rows] = token(s, columns, i);
             columns = 0;
             rows++; 
         }
         else
         {         
             columns++; 
             //printf("its doin something - 4\n");  
         } 
         i++;
     }
     words[rows] = NULL;

       /* for(i=0; i < rows; i++)
        printf(" %s\n",*words);   */
     return (words);
 }

/* int main (int argc, char **argv)
{
    char *str = "         Return an array of shit";
    //ft_split(str, ' ');

    int i = 0;
    char **test = ft_split(str, ' ');
    while (test[i])
    {
        printf("\n %s \n\n", test[i]);
        i++;
    }
    return (0);
} */
