/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strvec_drop.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbielik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:04:33 by pbielik           #+#    #+#             */
/*   Updated: 2021/09/21 17:04:34 by pbielik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_vec.h"

void	strvec_drop(t_strvec *self)
{
	t_str	to_drop;

	while (strvec_length(self) != 0)
	{
		to_drop = strvec_pop(self);
		str_drop(&to_drop);
	}
	vec_drop(self);
}
