/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivda-cru <ivda-cru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 12:35:31 by ivda-cru          #+#    #+#             */
/*   Updated: 2021/11/09 15:03:45 by ivda-cru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    i++;

    return(i);
}

int main(int argc, char **argv)
{
    char *str = argv[1];
    printf("%d\n", ft_strlen(str));
    return (0);
}