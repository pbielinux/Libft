/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_set.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbielik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:17:11 by pbielik           #+#    #+#             */
/*   Updated: 2021/09/21 16:17:12 by pbielik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

void	vec_set(t_vec *self, size_t index, const void *value)
{
	t_splice	splice;

	splice.index = index;
	splice.delete_count = 0;
	splice.items = value;
	splice.insert_count = 1;
	if (index == self->length)
		vec_splice(self, splice);
	else
	{
		splice.delete_count = 1;
		vec_splice(self, splice);
	}
}
