/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkenchur <dkenchur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 13:01:35 by dkenchur          #+#    #+#             */
/*   Updated: 2020/10/29 15:17:29 by dkenchur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *s);
char	**ft_strsplit(char const *s, char c);
void	*memset(void *b, int c, size_t len);
void	bzero(char *s, size_t n);
void	*memcpy(void *restrict dst, const void *restrict src, size_t n);
void	*memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
#endif
