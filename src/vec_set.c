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
	if (index == self->length)
		vec_splice(self, splice_args(index, 0, value, 1));
	else
		vec_splice(self, splice_args(index, 1, value, 1));
}
