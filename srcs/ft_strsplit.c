/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkenchur <dkenchur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 13:01:09 by dkenchur          #+#    #+#             */
/*   Updated: 2020/10/29 13:01:13 by dkenchur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	get_words_count(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (*(s + i))
	{
		if (*(s + i) != c)
		{
			count++;
			while (*(s + i) != c && *(s + i))
				i++;
		}
		i++;
	}
	return (count);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**strs;
	int	peace_size;
	int	words_count;
	int	i;
	int	j;

	words_count = get_words_count(s, c);
	strs = (char**)malloc(sizeof(char*) * words_count);
	if (strs == NULL)
		return (strs);
	i = 0;
	j = 0;
	while (*s)
	{
		while (*s != c && *s)
		{
			peace_size++;
			s++;
		}
		*(strs + j) = (char*)malloc(sizeof(char) * peace_size + 1);

	}
}