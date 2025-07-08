/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 22:07:09 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/07/09 01:29:25 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s1)
{
	char	*ptr;

	ptr = (char *)calloc(ft_strlen(s1), sizeof(char));
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, s1, ft_strlen(s1) + 1);
	return (ptr);
}
/*
int main(void)
{

}
*/
/*
strdup() 함수는 문자열 s1의 복사본을 만들기에 충분한 메모리를 할당하고,
복사를 수행한 뒤 그 복사본을 가리키는 포인터를 반환한다.
이 포인터는 이후 free() 함수의 인자로 사용하여 해제해야한다.

메모리가 충분하지 않으면 NULL을 반환.
*/