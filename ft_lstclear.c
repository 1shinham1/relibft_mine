/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 22:43:25 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/07/21 22:48:19 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*saveptr;

	if (!lst)
		return ;
	while (*lst)
	{
		saveptr = (*lst)->next;
		ft_lstdelone(*lst,del);
		*lst = saveptr;
	}
}
