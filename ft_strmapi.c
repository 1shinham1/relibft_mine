/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:18:50 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/07/16 16:49:39 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ans;
	unsigned int	i;

	i = 0;
	ans = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!ans || !f)
		return (0);
	while (s[i] != 0)
	{
		ans[i] = (*f)(i,s[i]);
		i++;
	}
	return (ans);
}