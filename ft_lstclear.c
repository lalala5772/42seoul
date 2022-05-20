/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlee2 <mlee2@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:53:10 by mlee2             #+#    #+#             */
/*   Updated: 2022/05/18 19:11:14 by mlee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst2;

	lst2 = *lst;
	if (lst || *lst)
	{
		while (*lst)
		{
			*lst = lst2->next;
			del(lst2->content);
			free(lst2);
			lst2 = *lst;
		}
	}
}
