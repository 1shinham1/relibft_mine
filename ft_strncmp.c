/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 00:48:22 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/07/09 02:35:42 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*string1;
	unsigned char	*string2;

	i = 0;
	string1 = (unsigned char *)s1;
	string2 = (unsigned char *)s2;
	while ((*string1 != 0 || *string2 != 0) && i < n)
	{
		if (*string1 > *string2)
		{
			return (1);
		}
		else if (*string1 < *string2)
		{
			return (-1);
		}
		string1++;
		string2++;
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