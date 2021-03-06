/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstkchkord.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 18:57:00 by tpotier           #+#    #+#             */
/*   Updated: 2019/05/05 15:39:03 by tpotier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_sstkchkord(t_sstack *stk)
{
	size_t	i;

	i = 0;
	while (i < stk->sp - 1)
	{
		if (stk->stack[i] < stk->stack[i + 1])
			return (0);
		i++;
	}
	return (1);
}
