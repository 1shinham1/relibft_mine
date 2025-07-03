/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 00:33:41 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/07/04 00:42:15 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	int	i;

	i = (int)ft_strlen(s);
	s = s + i;
	while (i >= 0)
	{
		if (*s == c)
		{
			return (s);
		}
		s--;
		i--;
	}
	return (0);
}
