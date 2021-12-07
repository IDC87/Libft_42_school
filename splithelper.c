/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splithelper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivda-cru <ivda-cru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 12:29:39 by ivda-cru          #+#    #+#             */
/*   Updated: 2021/12/07 14:56:05 by ivda-cru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	str_words(char const *str, char sep)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i])
	{
		while (str[i] == sep && str[i])
			i++;
		if (str[i] == '\0')
			break ;
		while (str[i] != sep && str[i])
			i++;
		result++;
	}
	return (result);
}

static	char	*get_next_word(const char *str, int *i, char sep)
{
	int		j;
	char	*new;

	while (str[*i] == sep)
		if (str[(*i)++] == '\0')
			return (NULL);
	j = 0;
	while (str[*i + j] != sep && str[*i + j])
		j++;
	if (j != 0)
	{
		new = (char *)malloc(sizeof(char) * (j + 1));
		if (new == NULL)
			return (NULL);
		j = 0;
		while (str[*i] != sep && str[*i])
			new[j++] = str[(*i)++];
		new[j] = '\0';
	}
	else
		return (NULL);
	return (new);
}

char	**ft_split(char const *str, char sep)
{
	char	**list;
	char	*word;
	int		*i;
	int		j;
	int		k;

	list = (char **)malloc(sizeof(char *) * (str_words(str, sep) + 1));
	if (list == NULL)
		return (NULL);
	j = 0;
	i = &j;
	k = 0;
	while (k < str_words(str, sep))
	{
		word = get_next_word(str, i, sep);
		if (word == NULL)
			break ;
		list[k++] = word;
	}
	list[k] = NULL;
	return (list);
}

int main (int argc, char **argv)
{
    char *str = "merda";
    //ft_split(str, ' ');

    int i = 0;

    printf("%d", str_words(str, '\0'));


    char **test = ft_split(str, '\0');
    while (test[i])
    {
        printf("\n %s \n\n", test[i]);
        i++;
    }
    return (0);
}
