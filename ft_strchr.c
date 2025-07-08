/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 00:18:46 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/07/09 03:39:19 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	size_t			len;
	unsigned char	*ptr;

	i = 0;
	len = ft_strlen(s);
	ptr = (unsigned char *) s;
	while (i <= len)
	{
		if (*ptr == (unsigned char) c)
		{
			return ((char *)ptr);
		}
		ptr++;
		i++;
	}
	return (0);
}
