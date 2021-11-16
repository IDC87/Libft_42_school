/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:35:11 by marvin            #+#    #+#             */
/*   Updated: 2021/11/16 11:35:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

/* The strnstr function locates the first occurrence of the null-terminated string \c little in the string \c big, 
where not more than \c len characters are searched. Characters that appear after a \0 character are not searched. 
Since the strnstr function is a FreeBSD specific API, it should only be used when portability is not a concern. */

/*RETURN VALUES - If needle is an empty string, haystack is returned; 
if needle occurs nowhere in haystack, NULL is returned; 
otherwise a pointer to the first character of the first occurrence of needle is returned. */

char 	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;    

    i = 0;
    if (needle[0] == '\0')
    return((char*)haystack);
    while (haystack[i] != '\0')
    {
        j = 0;
        while(haystack[i + j] == needle[j] && (i + j) < len)
        {    
            return ((char *)&haystack[i]);
            j++;
        }    

        i++;
    }
    return (NULL);

}

capaz de estar certo, perhaps :/

int main()
{
    char *str1 = "a moar rigid test now";
    char *str2 = "mo";
    size_t a = 3;

    char *res = ft_strnstr(str1, str2, a);

    printf("\n\n%s\n\n", res);

    return (0);
}
