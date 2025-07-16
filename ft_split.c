/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 14:33:57 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/07/16 18:30:19 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	free_ans(char **ans)
{
	size_t	i;

	i = 0;
	while (ans[i])
	{
		free(ans[i]);
		i++;
	}
	free(ans);
	return (0);
}

size_t	count_numof_split(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != 0)
	{
		while (s[i] == c && s[i] != 0)
			i++;
		if (s[i] != c && s[i] != 0)
			count++;
		while (s[i] != c && s[i] != 0)
			i++;
	}
	return (count);
}

size_t	count_numof_word(const char *ptr, char c)
{
	size_t	count;

	count = 0;
	while (*ptr != c && *ptr != 0)
	{
		count++;
		ptr++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**ans;
	size_t	k;
	size_t	len;

	k = 0;
	ans = (char **)ft_calloc(count_numof_split(s, c) + 1, sizeof(char *));
	if (!ans)
		return (0);
	while (*s != 0)
	{
		while (*s == c && *s != 0)
			s++;
		if (*s == 0)
			break ;
		len = count_numof_word(s, c);
		ans[k] = ft_calloc(len + 1, sizeof(char));
		if (!ans[k])
		{
			free_ans(ans);
			return (0);
		}
		ft_strlcpy(ans[k++], s, len + 1);
		s = s + len;
	}
	return (ans);
}

/*
메모리 할당을 실패할 경우 안에 있는 모든 문자열을 free해주어야함.

*/