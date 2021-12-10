/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivda-cru <ivda-cru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 10:26:15 by ivda-cru          #+#    #+#             */
/*   Updated: 2021/12/10 15:08:13 by ivda-cru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	res;
	int	sig;
	int	j;

	sig = 1;
	j = 0;
	while ((str[j] == ' ' || (str[j] >= '\t' && str[j] <= '\r')) && str[j])
		j++;
	while ((str[j] == '+' || str[j] == '-') && str[j] != '\0')
	{
		if (str[j] == '-')
			sig = sig * (-1);
		j++;
	}
	res = 0;
	while ((str[j] >= '0' && str[j] <= '9') && str[j] != '\0')
	{
		res = (res * 10) + (str[j] - '0');
		j++;
	}
	return (res * sig);
}
