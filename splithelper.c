/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splithelper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivda-cru <ivda-cru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 12:29:39 by ivda-cru          #+#    #+#             */
/*   Updated: 2021/11/30 21:44:09 by ivda-cru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 char *number_of_tokens(char const *s, char delimeter)
 {
      int i;
    int j;   
    int len = 0;
    int token_count;
    char **token;

   
    int *tok;
    int tokpos;
    //int count_pos[];

    i = 0;
    int column = 0;
    int line = 0;
    
    token_count = 0;
    while (s[i] != '\0')
    {
        if (s[i] == delimeter)
        {
            len = 0;
            *(*(token + column) + line) = '\0';
            column++;
            line = 0;
        }
        else if(++len == 1)
        {
            token_count++;
            *(*(token + column) + line) = s[i];
            line++;
            printf("%d\n", i);   
            printf("\n\n %s \n\n", (s + i)); 
        } 
        i++;        
    }

    column = 0;
    line = 0;
    i = 0;
    while(i < column)
    {
        while(j < line)
        {
            printf("\n\n\n %c \n\n\n", token[column][line]);
            j++;
        }
        i++;
    }

    printf("SECOND PART\n\n");

     

    

    //printf("\n\n%s\n\n", words);
    return(*token);

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
    printf("\n\n %s \n\n", ft_split("Returns an array of shit"));
    return (0);
}


// HOW TO SOLVE THIS SHIT
/* int main()
{
    char str1[100];
    char newString[10][10]; 
    int i,j,ctr;
       printf("\n\n Split string by space into words :\n");
       printf("---------------------------------------\n");    
 
    printf(" Input  a string : ");
    fgets(str1, sizeof str1, stdin);	
 
    j=0; ctr=0;
    for(i=0;i<=(strlen(str1));i++)
    {
        // if space or NULL found, assign NULL into newString[ctr]
        if(str1[i]==' '||str1[i]=='\0')
        {
            newString[ctr][j]='\0';
            ctr++;  //for next word
            j=0;    //for next word, init index to 0
        }
        else
        {
            newString[ctr][j]=str1[i];
            j++;
        }
    }
    printf("\n Strings or words after split by space are :\n");
    for(i=0;i < ctr;i++)
        printf(" %s\n",newString[i]);
    return 0;
}
 */

