/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 00:29:52 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/07/12 01:01:11 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	dstsize;

	if (!s)
		return (0);
	if (ft_strlen(s) <= start)
		dstsize = 0;
	else
	{
		if (ft_strlen(s + start) > len)
			dstsize = len;
		else
			dstsize = ft_strlen(s) - start;
	}
	s1 = (char *)malloc((dstsize + 1) * sizeof(char));
	if (!s1)
		return (0);
	if (ft_strlen(s) > start)
		ft_strlcpy(s1, s + start, dstsize + 1);
	else
		s1[0] = '\0';
	return (s1);
}
/*
#include <stdio.h>
int main(void){
	char	str[] = "lorem ipsum dolor sit amet";
	printf("%s\n",ft_substr(str, 0, 10));
	printf("lorem ipsu\n");
	printf("%s\n",ft_substr(str, 7, 10));
	printf("psum dolor\n");
}*/
/*
문자열 s1에서 start 인덱스부터 len만큼 새로운 메모리에 담아서 포인터 반납.

끝에 NULL처리를 해주어야함.
- 문자열 s 길이보다 start의 인덱스가 더 클 때 -> 아무것도 안함
- 문자열 s 길이보다 start의 인덱스가 작을 때
	-len 을 하였더니 더 길 때 -> 문자가 끝날 때까지
?????
31번 줄에 (dstsize + 1) * sizeof(char)의 오버플로우는 고려하지 않아도 괜찮은가?
*/