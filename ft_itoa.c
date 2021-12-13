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
	n = -n;
	while (n)
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
	int		j;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = itoa_size(n);
	j = 0;
	if (n < 0)
		j = 1;
	str = (char *)malloc(sizeof(char) * (len + j));
	if (str == NULL)
		return (NULL);
	if (n == 0)
		*str = n / 10 + '0';
	convertion(str, n, len);
	str[len + 1] = '\0';
	return (str);
}
/* int main(int argc, char **argv)
{
    printf("\n%s\n\n", ft_itoa(-5859));

	int i = 0;
	i = strlen(ft_itoa(-5859));


	printf("\n %d \n\n", i);

    return 0;
}  */

/* #include "libft.h"

static int	numlen(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	n = -n;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = 0;
	if (n < 0)
		i = 1;
	len = numlen(n) + i;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	str[len] = '\0';
	n = n * (((n < 0) * -2) + 1);
	while (len-- != i)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
} */