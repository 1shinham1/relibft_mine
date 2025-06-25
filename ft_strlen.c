/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 14:53:38 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/06/25 15:47:02 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[6]="hello";
	char b[6]="hell";
	char c[6]="hel";
	char d[6]="he";
	char e[6]="0\0`";

	printf("strlen = %lu , ft_strlen = %lu\n",strlen(a),ft_strlen(a));
	printf("strlen = %lu , ft_strlen = %lu\n",strlen(b),ft_strlen(b));
	printf("strlen = %lu , ft_strlen = %lu\n",strlen(c),ft_strlen(c));
	printf("strlen = %lu , ft_strlen = %lu\n",strlen(d),ft_strlen(d));
	printf("strlen = %lu , ft_strlen = %lu\n",strlen(e),ft_strlen(e));
}*/