/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ bzero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 18:30:39 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/07/03 23:45:16 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
	return (s);
}
/*
void bzero(void *s, size_t n);
#include <strings.h>
bzero()는 표준 C (C99 이후)에는 포함되어 있지 않다. --> memset()이 더 안전함.

1. n이 배열보다 길면? -> 그냥 초기화 해버림
*/