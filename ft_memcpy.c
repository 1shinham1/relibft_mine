/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 23:21:25 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/07/09 03:18:35 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	if (dst == src || n == 0)
		return (dst);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[6] = "hello";
	char b[6] = "xxxxx";
	ft_memcpy(b,b,3);
	printf("char a = %s , char b = %s\n",a,b);
	// printf("char a = %s , char b = %s\n",a,ft_memcpy(b,a,6));
}
*/
/*
#include <string.h>

 void *
 memcpy(void *restrict dst, const void *restrict src, size_t n);
 src에서 dst로 n바이트 만큼 복사
 -overlap이 생기면 무시하고 덮어버린다.

 만약 dst와 src가 같은 주소가 같거나 n = 0 떄 바로 dst반환
 -이유-
 n == 0 인 경우에도 바로 dst 또는 src를 참조(dereference)하거나 루프 진입하여 NULL을 역참조하여 
 Segmentation Fault (crash) 발생할 수 있기 때문. 

const는 읽기만하고 바꾸지 않는다.
restrict는 다른 포인터는 겹치지하지 않겠다.

 ????
restrict에 겹치는 메모리가 할당되는 것은 100%개발장의 잘못이고 컴퓨터의 잘못이 없다는것인가?
왜 메모리 복사에 unsigned char를 사용해야 안전한거지?

unsigned char *d = (unsigned char *)dst;
const unsigned char *s = (const unsigned char *)src;
로 새로 선언하지 말고 "(unsigned char *)dst"으로 바로 while에 쓰면 안되나?
*/