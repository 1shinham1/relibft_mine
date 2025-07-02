/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 23:24:34 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/07/03 00:51:39 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	len;
	int		i;

	i = 0;
	while (*(src + i) != 0 && i < dstsize - 1 && dstsize != 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	len = 0;
	while (*(src + len) != 0)
		len++;
	return (len);
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[6] = "hello";
	char b[6] = "";
	ft_strlcpy(b, a, 2);
	printf("str b = %s , return = %zu\n",b,ft_strlcpy(b, a, 2));
}*/
/*
destsize 안에 '/0' 포함되어야함
반환값이 dstsize 이상이면 잘림이 발생했다는 의미함
src와 dst가 겹치는 경우 동작이 정의되지 않음. -> memmove()를 사용

1. dstsize가 0이면 어떻게되는가? -> 아무것도 안해도 괜찮음
2. src가 NULL종료가 아니라면? -> 정상적인 문자열만 생각하기에 생각할 필요 없음

고려사항
src < destsize : src까지 복사후 NULL처리
src >= destsize : (dstsize - 1)까지 복사후 NULL처리

dstsize == 0 : 종료
dstsize == 1 : null 넣고 종료
*/