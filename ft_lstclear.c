/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <plpelleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 14:33:32 by plpelleg          #+#    #+#             */
/*   Updated: 2021/10/05 17:02:16 by plpelleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*p;
	t_list	*follow;

	if (!*lst)
		return ;
	p = *lst;
	while (p != NULL)
	{
		follow = p->next;
		if (del)
		{
			del(p->content);
		}
		free(p);
		p = follow;
	}
	*lst = NULL;
}
