/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:34:38 by marvin            #+#    #+#             */
/*   Updated: 2021/11/17 19:34:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The calloc() function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
The  memory  is  set to zero.  If nmemb or size is 0, then calloc() returns either NULL, or a unique pointer value that can later be 
successfully passed to free(). If the multiplication of nmemb and size would result in integer overflow, then calloc()  returns  an  error.
By contrast, an integer overflow would not be detected in the following call to malloc(), 
with the result that an incorrectly sized block of memory would be allocated:

           malloc(nmemb * size); */

 void *ft_calloc(size_t nmeb, size_t size)
{
    if (nmeb == 0 || size == 0)
        return (NULL);
    char *str = (char *)malloc(nmeb * size);
    if(str != NULL)
    memset((char *)str, '\0', nmeb * size);
    return (str);

} 

//podera estar certo, verificar se e com o char nulo que se usa!

int main(int argc, char **argv)
{
    char *str = argv[1];
    printf("\nYour chosen string has: %ld chars\n\n", strlen(str));
     char * str2;     
     str2 = (char *)ft_calloc(strlen(str + 4), sizeof(char));
    memmove(str2, str, strlen(str));     

    printf("\nCopied string is: %s\n\n", str2 + 4);

    free(str2);

    return (0);
}

// void *malloc(size_t n_bytes)