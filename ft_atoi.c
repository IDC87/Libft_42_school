/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 10:26:15 by ivda-cru          #+#    #+#             */
/*   Updated: 2021/11/18 17:56:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	res;
	int	sig;
	int	j;

	res = 0;
	sig = 1;
	j = 0;
	while (str[j] == ' ' || (str[j] >= '\t' && str[j] <= '\r'))
		j++;
	while (str[j] == '+' || str[j] == '-')
	{
		if (str[j] == '-')
			sig = sig * (-1);
		j++;
	}
	while (str[j] >= '0' && str[j] <= '9')
	{
		res = (res * 10) + (str[j] - '0');
		j++;
	}
	return (res * sig);
}
