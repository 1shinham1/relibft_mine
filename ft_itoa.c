/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 09:06:35 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/07/16 18:31:20 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	lenofnum(long int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n *= (-1);
	}
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*ans;
	size_t		len;
	long int	n1;

	n1 = n;
	len = lenofnum(n);
	ans = (char *)malloc(len + 1);
	if (!ans)
		return (0);
	ans[len] = 0;
	if (n == 0)
		ans[0] = '0';
	if (n1 < 0)
	{
		ans[0] = '-';
		n1 *= (-1);
	}
	while (n1 > 0)
	{
		ans[len - 1] = n1 % 10 + '0';
		n1 /= 10;
		len--;
	}
	return (ans);
}
