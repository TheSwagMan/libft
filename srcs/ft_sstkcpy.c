/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstkcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotier <tpotier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 15:37:51 by tpotier           #+#    #+#             */
/*   Updated: 2020/02/25 19:22:44 by tpotier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_sstack	*ft_sstkcpy(t_sstack *s)
{
	t_sstack	*copy;

	copy = ft_sstkinit(s->size);
	ft_memcpy(copy->stack, s->stack, s->size * sizeof(int));
	copy->sp = s->sp;
	return (copy);
}
