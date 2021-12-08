/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:57:23 by marvin            #+#    #+#             */
/*   Updated: 2021/12/08 15:47:10 by ivda-cru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	itoa_size(int n)
{
	int	size;

	size = 0;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int	i;
	int	z;
	int	len;
	char	*str;

	len = itoa_size(n);
	i = 0;
	z = 0;
	str = (char *)malloc(sizeof(char) * (len) + 1);
	if (str == NULL)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	while (len--)
	{
		if (n < 0)
		{
			n = n * (-1);
			len = len + 1;
			z = 1;
		}
		str[len] = (n % 10) + '0';
		n = n / 10;
		if (z == 1)
			str[0] = '-';
		i++;
	}
	return (str);
}
/* int main(int argc, char **argv)
{
    printf("\n\n %s \n", ft_itoa(-2147483648));

    return 0;
} */
