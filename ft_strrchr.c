/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 00:33:41 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/07/09 01:33:55 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	ptr = (char *)s;
	i = (int)ft_strlen(ptr);
	ptr = ptr + i;
	while (i >= 0)
	{
		if (*ptr == c)
		{
			return (ptr);
		}
		ptr--;
		i--;
	}
	return (0);
}
