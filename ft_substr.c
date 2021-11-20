/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivda-cru <ivda-cru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 21:14:46 by ivda-cru          #+#    #+#             */
/*   Updated: 2021/11/20 23:15:01 by ivda-cru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char *str;

    if(!s)
        return (0);
    

    i = 0;
    str = (char *)malloc(sizeof(*s) * ft_strlen(s));

    

    if(str == NULL)
        return (NULL);

    while(i < len && start < ft_strlen(s))
    {
        str[i] = s[start];
        start++;
        i++;
    }
    str[i] = '\0';

        
    

    return(str);
}

/* int main(int argc, char **argv)
{
    char *str = argv[1];
    int index = 0;
    int len = 0;

    //ft_substr(str, 3 ,4);

    printf("\n\n %s \n\n", ft_substr(str, 3, 4));

    return(0); 
} */