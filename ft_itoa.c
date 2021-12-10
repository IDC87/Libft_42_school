/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivda-cru <ivda-cru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:14:20 by ivda-cru          #+#    #+#             */
/*   Updated: 2021/12/10 17:43:32 by ivda-cru         ###   ########.fr       */
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

char	*convertion(char *str, int n, int len)
{
	int	z;

	z = 0;
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
	}
	return (str);
}

char	*ft_itoa(int n)
{	
	int		len;
	char	*str;

	len = itoa_size(n);
	str = (char *)malloc(sizeof(char) * (len) + 1);
	if (str == NULL)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	convertion(str, n, len);
	return (str);
}
/* int main(int argc, char **argv)
{
    printf("\n\n %s \n", ft_itoa(-2147483648));

    return 0;
} */
