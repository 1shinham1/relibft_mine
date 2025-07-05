/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 17:09:51 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/07/05 17:57:27 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int				i;
	long int		result;
	char			flag;
	
	i = 0;
	result = 0;
	flag = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			flag = flag * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result += (str[i] - '0');
		result *= 10;
		i++;
	}
	return (result * flag / 10);
}
/*
#include <stdlib.h>
#include <stdio.h>
int main(void){
	char *tests[] = {
        "42", "   42", "-42", "+42", "0042", "   -0042",
        "--42", "++42", "-+42", "+-42", "- 42", "   +0000042",
        "abc42", "42abc", "   -42abc55", "   +42abc55",
        "2147483647", "-2147483648", "2147483648", "-2147483649",
        " \t\n\r\f\v42", " \t\n -42",
        NULL
    };

    for (int i = 0; tests[i] != NULL; i++) {
        printf("Input: \"%s\" => atoi: %d // ft_atoi: %d\n", tests[i], atoi(tests[i]),ft_atoi(tests[i]));
    }
}
*/
/*
str의 공백(스페이스, 탭 등)을 무시하고 첫 숫자가 나올 때까지 건너뜀.
+ 또는 - 기호가 있으면 부호를 결정.
숫자(0~9)가 연속되는 동안 정수로 변환하여 누적.
숫자가 아닌 문자가 나오면 변환을 멈춤.
결과값을 int로 반환.

???
"   \n - \t 42xyz" 이면 마이너스? -> 아님 '-','+' 공백 다 넘김.
"++42", "-+42" -> 0
"a-42xyz" -> 0 
"-0042" -> -42
*/