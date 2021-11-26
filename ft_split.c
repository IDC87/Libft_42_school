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

 /* #include "libft.h"

char **ft_split(char const *s, char c)
{
  char **arr;
    int i;
    int j;

    i = 0;

    // tambem da para usar calloc em principio. Para arrays ate e melhor
    // arr = (char**)calloc(n, sizeof(char *))

    arr = (char **)malloc(sizeof(char *) * 3);
    while(i < 3)
    {
        arr[i] = (char*)malloc(sizeof(char) * 3);
        i++;
    } 
 

    return (arr);

}

 int main (int argc, char **argv)
{
    printf("\n\n %s \n\n", ft_split("TESTE"));
    return (0);
} */