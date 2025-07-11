/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 00:05:23 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/07/12 03:15:43 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	int		end;
	char	*ans;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (start < ft_strlen(s1) && ft_strchr(set, s1[start]) != 0)
		start++;
	while (end >= 0 && ft_strchr(set, s1[end]) != 0)
		end--;
	if ((int)start > end)
	{
		ans = (char *)ft_calloc(1, sizeof(char));
		if (!ans)
			return (NULL);
		ans[0] = 0;
		return (ans);
	}
	ans = (char *)ft_calloc(end - start + 2, sizeof(char));
	if (!ans)
		return (0);
	ft_strlcpy(ans, &s1[start], end - start + 2);
	return (ans);
}
/*
#include <stdint.h>
int main()
{
	char s1[] = " \nhello\t";
	char set[] = " \n\t";
	printf("%s", ft_strtrim(s1,set));
	return (0);
}
*/
/*
문자열 s1의 양 끝에 set과 겹치는 문자들을 다 지운다.

end를 int로 하는 이유는 빈 문자열일 때 음수를 가게하기 위함이다.
ex)
s1 = "  \n hello \t "
set = " \n\t"
ft_strtrim = "hello"
*/