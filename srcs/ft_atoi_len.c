/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 23:11:40 by tpotier           #+#    #+#             */
/*   Updated: 2019/05/05 23:12:56 by tpotier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long		ft_atoi_len(char *str, size_t *i)
{
	long	ret;

	ret = 0;
	while (ft_isdigit(str[*i]) && str[*i])
	{
		ret = (ret * 10) + str[*i] - '0';
		(*i)++;
	}
	return (ret);
}
