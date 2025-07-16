/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 17:39:54 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/07/16 18:28:48 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	numberofzero(long int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (0);
	while ((n % 10) == 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

long int	reverse_num(long int n)
{
	long int	result;

	result = 0;
	while (n > 0)
	{
		result += (n % 10);
		n /= 10;
		if (n > 0)
			result *= 10;
	}
	return (result);
}

void	ft_putnbr_fd(int n, int fd)
{
	long int	num;
	long int	numreverse;
	char		c;
	int			numofzero;

	if (n == 0)
		write(fd, "0", 1);
	num = n;
	if (num < 0)
	{
		write(fd, "-", 1);
		num *= (-1);
	}
	numofzero = numberofzero(num);
	numreverse = reverse_num(num);
	while (numreverse > 0)
	{
		c = (numreverse % 10) + '0';
		write(fd, &c, 1);
		numreverse /= 10;
	}
	while (numofzero--)
		write(fd, "0", 1);
}
/*
int main(void)
{
	ft_putnbr_fd(10, 1);
}*/