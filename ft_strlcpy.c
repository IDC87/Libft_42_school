/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivda-cru <ivda-cru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 20:22:53 by ivda-cru          #+#    #+#             */
/*   Updated: 2021/11/14 14:07:48 by ivda-cru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	return (i);
}
