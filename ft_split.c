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

#include "Libft.h"

char **ft_split(char const *s)
{
    char **arr;
    int i;
    int j;

    i = 0;

     
     
    while(i < 6)
    {
        j = 0;
        while(j < 8)
        {
            if(s[j] == ' ')
            arr[i][j] = s[i];
            printf("%s", &arr[i][j]);
            j++;

        }
        i++;
    }

    return (arr);

}

int main (int argc, char **argv)
{
    printf("\n\n %s \n\n", ft_split("TESTE"));
    return (0);
}