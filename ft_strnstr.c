/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 15:50:35 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/07/09 02:45:24 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		k;
	char	*strh;
	char	*strn;

	i = 0;
	k = 0;
	strh = (char *)haystack;
	strn = (char *)needle;
	if (strn[0] == 0)
		return (strh);
	while (strh[i] != 0 && i < len)
	{
		while (strh[i] == strn[k] && i < len)
		{
			if (strn[k + 1] == 0)
				return (strh + i - k);
			i++;
			k++;
		}
		i = i - k;
		i++;
		k = 0;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(void){
	char a[13] = "Hello my bro";
	char b[3] = "myb";
	printf("%s ,%p", ft_strnstr(a,b,7),ft_strnstr(a,b,7));
}
*/
/*
문자열 haystack에서 문자열 needle을 찾고 그 첫 포인터를 반환함
if needle이 빈 문자열이면 haystack 첫 포인터 반환 
if needle이 haystack에 한번도 안나오면 NUll이 반환

/0 이후는 찾지 않음
*/