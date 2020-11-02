/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkenchur <dkenchur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 21:11:09 by dkenchur          #+#    #+#             */
/*   Updated: 2020/11/02 22:26:28 by dkenchur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int	num;
	char			*str;
	unsigned int	size;
	
	size = n > 0 ? 1 : 2;
	num = n;
	while (n / 10)
	{
		n /= 10;
		size++;
	}
	if (!(str = (char*)calloc(size + 1, 1)))
		return (str);
	if (num < 0)
	{
		num *= -1;
		*(str + 0) = '-';
	}
	while (size > 0)
	{
		size--;
		*(str + size) = (num % 10) + '0';
		num /= 10;
		if (*(str + size - 1) == '-')
			break ;
	}
	return (str);
}
