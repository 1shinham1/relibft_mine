/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 18:00:56 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/06/24 18:42:24 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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

int main(void){
    int a[7] = {'1','0','9',' ','-',31,188};
    for(int i = 0; i < 7; i++){
        printf("%d",ft_isprint(a[i]));
    }
}*/