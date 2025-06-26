/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 00:51:56 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/06/27 03:04:02 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d;
	const unsigned char *s;
	int i;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = (int)len;
	while (--i >= 0)
	{
		d[i] = s[i];
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[6] = "hello";
	char b[6];
	ft_memmove(a,a,7);
	printf("char b = %s , char a = %s\n",b,a);
	// printf("char a = %s , char b = %s\n",a,ft_memcpy(b,a,6));
}
*/
/*
#include <string.h>

void *
memmove(void *dst, const void *src, size_t len);
src에서 dst로 n바이트 만큼 복사
-overlap이 생겨도 안전하게 복사. -> 뒤에서 부터 체움으로써 안정하게 복사함
*/
