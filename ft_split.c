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
    int j;
    int len;
    int token_count;   

    i = 0;
    j = 0;
    len = 0;
     if (!(*s))
        return (0);   
     
    //printf("\n1\n");
    token_count = 0;
    while (s[i]) //while (s[i] != '\0')
    {
        /* if(s[i] == '\0')
            break;       */
        if (s[i] == delimeter)        
            len = 0;        
        else if(++len == 1)             
            token_count++;
        i++;        
    }    
    return(token_count);
 }

static char *token(const char *s, int columns, int index)
{
    char *token;
    int i;
    int token_pos;  

    i = 0;    
    /* if(s[columns] == '\0')
        return (NULL); */

    token_pos = index - columns;    
    token = (char *)malloc(sizeof(char) * (columns + 1));

    while(i < columns)
    {
        token[i] = s[token_pos];
        i++;
        token_pos++;
    }
    token[i] = '\0';

    //printf("\n %s \n", token);
    

    return (token);
}

 char **ft_split(char const *s, char delimeter)
 {
     int rows;
     int columns;
     size_t i;
     char **words;     

     /* if(!s)
        return (0);    */

     words = (char **)malloc(sizeof(char *) * (number_of_tokens(s, delimeter) + 1));
     if (words == NULL)
        return (NULL);

     rows = 0;
     columns = 0;
     i = 0; 
     

     int len;
     len = 0;
     

     while (s[i] != '\0')
     {
         if(s[i] == delimeter)
         len = 0;
         else if(++len == 1)
         {
             while(s[i] != delimeter )
             {
                columns++;
                i++;
             }
             words[rows] = token(s, columns, i);
             rows++;
             columns = 0;
             //printf("%d", i);
             i--;
         }
        
         i++;
     }
     words[rows] = NULL;


     
     /* while (i < strlen(s)) //while (i < number_of_tokens(s, delimeter ))  
     {    
         if (s[i] == delimeter && rows < number_of_tokens(s, delimeter))
         {           
             //printf("entrou");
             words[rows] = token(s, columns, i);
             columns = 0;
             rows++; 
         }
         else
         {         
             columns++;            
         } 
         i++;
     }
     words[rows] = NULL; */

     return (words);
 }

  /* int main (int argc, char **argv)
{
    //"      split       this for   me  !       "; os dois inputs que nao dao
    //"                  olol"
    char *str = "      split       this for   me  !       ";
    char delimeter = ' ';
    

    //printf("\n%d\n", number_of_tokens(str, delimeter));


    int i = 0;
    char **test = ft_split(str, delimeter);
     while (test[i])
    {
        printf("\n$%s$\n\n", test[i]);
        i++;
    } 
    return (0);
}
  */