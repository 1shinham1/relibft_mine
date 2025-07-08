/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 01:00:06 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/07/09 03:42:35 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if ((*str1 - *str2) != 0)
		{
			return (*str1 - *str2);
		}
		i++;
		str1++;
		str2++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main(void) {
    char str1[] = "helb world";
    char str2[] = "hela world";

    printf("answer: %d\n", ft_memcmp(str1, str2, 4));
    return 0;
}
*/
/*
문자열의  NULL을 신경쓰지 않음(메모리를 비교하기 때문)
return 값은 "s1[i] - s2[i]" 값을 반환함.
*/