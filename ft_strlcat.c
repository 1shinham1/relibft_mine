/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 22:55:37 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/07/03 23:46:37 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int i;

	i = 0;
	while (dst[i] != 0)
		i++;
	if (dstsize <= i)
		return (dstsize + ft_strlen(src));
	else
	{
		while (i < dstsize - 1 && src[i] != 0)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
		return (ft_strlen(src) + ft_strlen(dst));
	}
}
/*
dst 버퍼에 src 문자열을 이어붙이되, dstsize 바이트를 넘지 않도록 안전하게 처리하면서, NUL 종료까지 보장해 주는 함수.
반환값: strlen(src) + strlen(dst) (붙이기 시도한 전체 길이, dstsize보다 크면 truncation 발생 의미)

dstsize <= dst : dstsize + strlen(src)를 반환하고 아무것도 안 붙임
dstsize > dst
	dstsize <= dst + src + 1 : dstsize - 1 까지 복사 후 NULL붙이기
	dstsize > dst + src + 1 : src까지 복사 후 NULL붙이기
*/