/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivda-cru <ivda-cru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:04:17 by ivda-cru          #+#    #+#             */
/*   Updated: 2021/11/09 15:03:18 by ivda-cru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_bzero(void *s, size_t n)
{
    unsigned char *str;
    size_t i;

    str = (unsigned char *) s;
    i = 0;

    while (str[i] != '\0' && i < n)
    {
        str[i] = '0';
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        char *str = argv[1];
        printf("%s\n", argv[1]);

        ft_bzero(argv[1], 0);

        printf("%s\n", argv[1]);
    }

    return (0);
}