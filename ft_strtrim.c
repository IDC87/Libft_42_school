/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 20:24:37 by ivda-cru          #+#    #+#             */
/*   Updated: 2021/12/06 14:48:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t j;
    //char *str;

    //str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1)); nao e preciso por causa de se ter usado a substr    
    if(!s1 || !set)
    return (0);

    
    while(*s1 && ft_strchr(set, *s1))
    s1++;
    j = ft_strlen(s1);
    while(j && ft_strchr(set, s1[j]))
    j--;   

    

    return (ft_substr(s1, 0, j + 1));
}

/* char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
} */

/* int main(int arcg, char **argv)
{
    char *s1 = argv[1];
    char *set = argv[2];

    printf("\n%s\n\n", ft_strtrim(s1, set));

    return (0);
} */