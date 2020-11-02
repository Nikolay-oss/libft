/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkenchur <dkenchur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:57:02 by dkenchur          #+#    #+#             */
/*   Updated: 2020/11/02 20:39:24 by dkenchur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isforbiden(char const *set, char const c)
{
	size_t	i;

	i = 0;
	while (*(set + i))
	{
		if (*(set + i) == c)
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*str;

	if (!s1)
		return ((char*)s1);
	i = 0;
	j = ft_strlen(s1);
	j = !j ? 1 : j - 1;
	while (i <= j)
	{
		if (isforbiden(set, *(s1 + i)))
			i++;
		else if (isforbiden(set, *(s1 + j)))
			j--;
		else
			break ;
	}
	if (!(str = ft_calloc(j - i + 2, 1)))
		return (str);
	k = 0;
	while (i <= j)
		*(str + k++) = *(s1 + i++);
	return (str);
}
