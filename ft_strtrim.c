/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivda-cru <ivda-cru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 20:24:37 by ivda-cru          #+#    #+#             */
/*   Updated: 2021/11/22 23:37:37 by ivda-cru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    char *str;

    str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1)));

    i = 0;
    j = strlen(s1) - 1;
    while(strchr(set, s1[i]) != NULL)
    i++;
    while(strchr(set, s1[j]) != NULL)
    j--;   

    return (ft_substr(s1, 0, i));
}

/* int main(int arcg, char **argv)
{
    char *s1 = argv[1];
    char *set = argv[2];

    printf("\n%s\n\n", ft_strtrim(s1, set));

    return (0);
} */