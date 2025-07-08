/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 00:18:46 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/07/09 00:12:47 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr(const char *s, int c)
{
	size_t 	i;
	size_t	len;
	char	*ptr;

	i = 0;
	len = ft_strlen(s);
	ptr = (char*)s;
	while (i <= len)
	{
		if (*ptr == c)
		{
			return (ptr);
		}
		ptr++;
		i++;
	}
	return (0);
}