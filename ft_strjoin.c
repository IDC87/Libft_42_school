/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivda-cru <ivda-cru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 23:25:53 by ivda-cru          #+#    #+#             */
/*   Updated: 2021/11/22 20:22:58 by ivda-cru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t i;
    size_t j;
    char *str;

    if(!(s1) || !(s2))
    return (0);

    i = 0;
    j = 0;

    //str = NULL;
    
    //s1 = (char *)malloc(sizeof(*s1) * (ft_strlen(s1)));
    //s2 = (char *)malloc(sizeof(*s2) * (ft_strlen(s2)));
    str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2)));


    if(str == NULL)
    return (NULL);


    while (i < ft_strlen(s1))
    {
        str[i] = s1[i];
        i++;
    }
    while (j < ft_strlen(s2))
    {
        str[i + j] = s2[j];
        j++;
    }
    str[i + j] = '\0';    

    return(str);

}

/* int main(int argc, char**argv)
{
    const char *s1 = argv[1];
    const char *s2 = argv[2];

    printf("\n\n %s \n\n", ft_strjoin(s1, s2));
    return (0);
} */