/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkenchur <dkenchur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 15:24:15 by dkenchur          #+#    #+#             */
/*   Updated: 2020/10/31 10:20:09 by dkenchur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,
	size_t n)
{
	unsigned char	*str_dst;
	unsigned char	*str_src;
	unsigned char	c_convert;
	size_t			i;

	str_dst = (unsigned char*)dst;
	str_src = (unsigned char*)src;
	c_convert = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		*(str_dst + i) = *(str_src + i);
		if (*(str_src + i) == c_convert)
			return (str_dst + i + 1);
		i++;
	}
	return (NULL);
}
