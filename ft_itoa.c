/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:57:23 by marvin            #+#    #+#             */
/*   Updated: 2021/11/23 16:57:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

int itoa_size(int n)
{
    int size;    

    size = 0;    
    while (n != 0)
    {
       n = n / 10;
       size++;
    }
    return (size);
}

char *ft_itoa(int n)
{       
    int i;
    int a;
    char *str;

    a = itoa_size(n);    
    i = 0;   
    str = (char *)malloc(sizeof(char) * (a + 1));
     if(str == NULL)
    return (NULL);

    if (n < 0)
    {
        n = n * (-1); // FALTA CALCULAR DE MANEIRA A METER O SINAL EM STRING NO FINAL
    }

    if (n == 0)
    *(str + i) = '0'; 

    while(a--)
    {
        printf("\n%d\n", n);
        str[a] = (n % 10) + '0';
        n = n / 10;       
        i++;
    }

     

    //printf("\n%d \n\n", n);    

    //printf("\n%d \n\n", i);


    return (str);

    

   

}

int main(int argc, char **argv)
{
    printf("\n\n %s \n", ft_itoa(-23232));

    return 0;
}