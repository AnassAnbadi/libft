/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahadda <abahadda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:28:13 by abahadda          #+#    #+#             */
/*   Updated: 2024/10/29 22:13:48 by abahadda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;
	t_list	*next;

	if (!lst || !del)
		return ;
	p = *lst;
	while (p)
	{
		next = p->next;
		ft_lstdelone(p, del);
		p = next;
	}
	*lst = NULL;
}
