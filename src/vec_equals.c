/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_equals.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbielik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:15:39 by pbielik           #+#    #+#             */
/*   Updated: 2021/09/21 16:15:40 by pbielik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

bool	vec_equals(const t_vec *self, const t_vec *other)
{
	unsigned long	current_pos;
	char			*self_char;
	char			*other_char;

	if (self->length != other->length)
		return (false);
	current_pos = 0;
	while (current_pos < (self->length * self->item_size))
	{
		self_char = (char *)(self->buffer) + current_pos;
		other_char = (char *)(other->buffer) + current_pos;
		if (*self_char != *other_char)
			return (false);
		current_pos++;
	}
	return (true);
}
