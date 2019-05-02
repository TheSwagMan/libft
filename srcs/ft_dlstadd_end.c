/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_end.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 18:01:48 by tpotier           #+#    #+#             */
/*   Updated: 2019/05/02 18:03:37 by tpotier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_dlstadd_end(t_dlist **lst, void *content)
{
	t_dlist	*new;

	if (!lst)
		return ;
	new = ft_dlstnew(content);
	if (!*lst)
		*lst = new;
	else
	{
		(*lst)->next = new;
		new->prev = *lst;
		*lst = new;
	}
}
