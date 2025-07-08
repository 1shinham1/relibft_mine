/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 22:26:34 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/07/09 01:33:35 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*s1;

	i = 0;
	s1 = (char *)s;
	while (i < n && s1[i] != 0)
	{
		if (s1[i] == c)
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
    char str[] = "hell world";
    char *p = ft_memchr(str, 'o', strlen(str));

    if (p != NULL) {
        printf("'o' found at position: %ld\n", p - str);
    } else {
        printf("'o' not found.\n");
    }
    return 0;
}
*/