/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivda-cru <ivda-cru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 18:55:04 by ivda-cru          #+#    #+#             */
/*   Updated: 2021/10/20 20:40:44 by ivda-cru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isalpha(int c)
{
    if(c > 0 && c < 9)
    return (0);

    return (1);


}

int main(int argc, char **argv)
{

    printf("%d\n", ft_isalpha(argv[]));
    return(0);
}