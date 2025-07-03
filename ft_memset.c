/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 15:49:03 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/07/03 23:46:30 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((char *)b)[i] = c;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[6] = "hello";
	char b[6] = "hello";
	char c[6] = "hello";
	//memset(a, 'x', 1);   ft_memset(b, 'x', 1);
	//memset(b, 'x', 6);   ft_memset(c, 'x', 6);
	//memset(a, 'x', 1);   ft_memset(b, 'x', 1);
	printf("memset = %s , ft_memset = %s\n",b,c);
}
*/
/*
	<string.h>
	 void* memset(void *b, int c, size_t len);
	 b 포인트부터 len만큼 'c'(보통 문자)로 체운다.


	void*는 역참조가 어렵다. 하기 위해서는 
		(int *)p  또는 (char *)p 등으로 타입을 알려줘야한다.
		or
		*((int *)p + i) 또는 ((int *)p)[i] 형태로 쓰는 게 안전하고 명확함

	1. len이 문자열 b보다 길다면? --> 경고가 뜸
	2.char 배열에 c가 int값이라면?	 
*/