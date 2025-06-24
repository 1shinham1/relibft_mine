/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 01:45:18 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/06/24 19:18:23 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*
#include <stdio.h>
int main(void)
{
    int a[7] = {1,'~',5,'a','b','A','`'};
    for(int i=0;i<7;i++){
        printf("%d",ft_isalpha(a[i]));
    }
}*/