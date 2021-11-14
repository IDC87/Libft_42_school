/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivda-cru <ivda-cru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:48:01 by ivda-cru          #+#    #+#             */
/*   Updated: 2021/11/14 14:07:35 by ivda-cru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

unsigned int	ft_strlen(char *len)
{
	int	j;

	j = 0;
	while (len[j] != '\0')
	{
		j++;
	}
	return (j);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	i = ft_strlen(dest);
	while (src[j] != '\0' && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[j]));
}
#include <stdio.h>
int main()
  {
      char str1 [] = "it is \0 everything sucks";
      char str2 [] = "what it is";
 
      printf("%d\n", ft_strlcat(str1, str2, 26));
      printf("%s\n", str1);
     char str0 [] ="it is \0 everything sucks";
     printf("%u\n", ft_strlcat(str0, str2, 26));
     printf("%s\n", str0);
     return (0);
 }
