/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 18:08:29 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/07/09 03:22:51 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (count != 0 && size > SIZE_MAX / count)
		return (0);
	p = malloc(count * size);
	if (p == 0)
		return (0);
	ft_bzero (p, count * size);
	return (p);
}
/*
count * size 만큼의 메모리 공간을 할당
2️⃣ 할당된 모든 메모리 블록을 0으로 초기화

`calloc` : 0으로 초기화           , 할당과 동시에 0 초기화 필요할 때
`malloc` : 초기화하지 않음 (쓰레기값), 빠른 할당만 필요할 때

메로리를 할당 할 때 malloc이 void *malloc(size_t size); 이기 때문에 (count * size) 오버 플로우를 잡아야함
오버플로우가 나면? -> NULL반환.

오버 플로우를 확인할떄 
if (nmemb != 0 && size * nmemb > SIZE_MAX)( nmemb != 0 ->가 안전하게 나누셈을 진행하게함. )
    return NULL;
이렇게하면 size * nmemb 에서 이미 오버ㅓ플로우가 나기 때문에 
if (nmemb != 0 && size > SIZE_MAX / nmemb)
    return NULL;
로해야함


*/