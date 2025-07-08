/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 22:26:34 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/07/09 03:10:04 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;

	i = 0;
	s1 = (unsigned char *)s;
	while (i < n)
	{
		if (s1[i] == (unsigned char) c)
		{
			return (s1 + i);
		}
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main(void) {
	char s[] = {0, 1, 2 ,3 ,4 ,5};
    printf("%p  s: %p ",ft_memchr(s, 0, 4), s);
   
    return 0;
}
*/