/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivda-cru <ivda-cru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:28:10 by ivda-cru          #+#    #+#             */
/*   Updated: 2021/12/04 18:41:23 by ivda-cru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    char *str;      

    str = ft_strdup((char const *)s); //sem o cast o tester diz que nao aloca.
    if (str == NULL)
        return (NULL);       

    i = 0;
    while (str[i] != '\0')
        {
            str[i] = f(i, s[i]);
            i++;
        }
    str[i] = '\0';     

    return (str);
} 

/* void test2()
{
    printf("FDXXX!!!");
}

void test1(void (*t)())
{
    printf("CRL!!!");
}

void test(void (*f)())
{
    f();
}

int main()
{
    test(test2);

    return (0);
} */