/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 17:25:20 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/07/03 23:45:54 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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
    int a[7] = {'1','0','9','a','-','H',188};
    for(int i = 0; i < 7; i++){
        printf("%d",ft_isascii(a[i]));
    }
}*/