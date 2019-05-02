/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 17:26:06 by tpotier           #+#    #+#             */
/*   Updated: 2019/05/02 17:37:21 by tpotier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_dlstdel(t_dlist **lst, void (*del)(void *))
{
	if (!lst || !*lst)
		return ;
	if ((*lst)->prev)
		(*lst)->prev->next = (*lst)->next;
	if ((*lst)->next)
		(*lst)->next->prev = (*lst)->prev;
	del((*lst)->content);
	free(*lst);
	*lst = NULL;
}