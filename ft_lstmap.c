/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 22:54:06 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/07/22 02:22:04 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*onenode;
	t_list	*returnlst;

	returnlst = 0;
	while (lst)
	{
		onenode = ft_lstnew(f(lst->content));
		if (!onenode)
		{
			ft_lstclear(&returnlst, del);
			return (NULL);
		}
		ft_lstadd_back(&returnlst, onenode);
		lst = lst->next;
	}
	return (returnlst);
}
/*
ft_lstadd_back(t_list **lst, t_list *new)함수는
*lst가 NULL일 경우 new를 처음으로 설정하기 때문에 처음 returnlst를 NULL로 시작.
*/