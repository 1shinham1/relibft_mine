/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 00:48:22 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/07/04 01:35:10 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while ((*s1 != 0 || *s2 != 0) && i < n)
	{
		if (*s1 > *s2)
		{
			return (1);
		}
		else if(*s1 < *s2)
		{
			return (-1);
		}
		s1++;
		s2++;
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main(void){
	char a[6] = "hello";
	char b[6] = "hell";
	printf("%d",ft_strncmp(a,b,5));
	return (0);
}*/
/*

int	ft_strncmp(const char *s1, const char *s2, size_t n)

s1 > s2 : 0보다 큰 정수
s1 == s2: 0
s1 < s2 : 0보다 작은 정수
strncmp() 함수는 최대 n개의 문자까지만 비교
*/