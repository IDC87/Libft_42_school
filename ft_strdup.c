/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 21:56:53 by marvin            #+#    #+#             */
/*   Updated: 2021/11/18 21:56:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strdup(const char *s)
{
    int i;
    char *str;

    str = NULL;
    i = 1;
    s = (char *)malloc(sizeof(*s) * ft_strlen(s) + 1);
    

    while(s[i] != '\0')
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';

    if(str == NULL)
        return (NULL);
    return (str);

}

// em principio esta certo, mas usar os testers para verificar tudo 