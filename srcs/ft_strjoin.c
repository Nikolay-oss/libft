/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkenchur <dkenchur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 13:00:25 by dkenchur          #+#    #+#             */
/*   Updated: 2020/11/01 15:50:39 by dkenchur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	size;
	size_t	i;

	if (!s1 || !s2)
		return ((char*)s1);
	size = ft_strlen(s1);
	size += ft_strlen(s2);
	str = (char*)malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (*s1)
	{
		*(str + i++) = *s1;
		s1++;
	}
	while (*s2)
	{
		*(str + i++) = *s2;
		s2++;
	}
	*(str + i) = '\0';
	return (str);
}
