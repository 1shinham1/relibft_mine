/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 18:57:14 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/07/11 19:14:58 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		i;

	ptr = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (ptr == 0 || s1 == 0 || s2 == 0)
		return (0);
	i = 0;
	while (*s1 != 0)
	{
		ptr[i++] = *s1;
		s1++;
	}
	while (*s2 != 0)
	{
		ptr[i++] = *s2;
		s2++;
	}
	ptr[i] = 0;
	return (ptr);
}

/*
문자열 s1 s2를 이어붙인 새로운 문자열을 반환
s1 == NULL , s2 == NULL , ptr == NULL : 0 반환
ft_strjoin("", "") : ""반환
문자열 끝에 '\0' 보장하는 길이 calloc해야함.
*/