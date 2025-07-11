/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 00:33:41 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/07/12 00:23:19 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = (int)ft_strlen(s);
	ptr = ptr + i;
	while (i >= 0)
	{
		if (*ptr == (unsigned char) c)
		{
			return ((char *)ptr);
		}
		ptr--;
		i--;
	}
	return (0);
}
/*
문자열 s에서 int c를 뒤어서 부터 찾고 그 포인터를 반환함
*/