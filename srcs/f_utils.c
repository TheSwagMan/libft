/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_utils.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valecart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 21:51:35 by valecart          #+#    #+#             */
/*   Updated: 2020/03/03 19:26:40 by tpotier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_special(long double f)
{
	return (f != f || f == INFINITY || f == -INFINITY);
}

int		is_neg(long double f)
{
	return (f == -INFINITY || 1 / f < 0);
}
