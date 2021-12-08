/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivda-cru <ivda-cru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 18:12:32 by ivda-cru          #+#    #+#             */
/*   Updated: 2021/12/08 16:02:55 by ivda-cru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*tempdst;
	const	char	*tempsrc;

	if (dst == 0 && src == 0)
		return (NULL);
	i = 0;
	if (dst <= src)
	{
		tempdst = dst;
		tempsrc = src;
		while (i < len)
		{
			tempdst[i] = tempsrc[i];
			i++;
		}
	}
	else
	{
		tempdst = dst;
		tempsrc = src;
		i = len - 1;
		while (i < len)
		{
			((unsigned char *)dst)[i] = tempsrc[i];
			i--;
		}
	}
	return (dst);
}
