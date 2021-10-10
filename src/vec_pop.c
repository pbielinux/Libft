/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_pop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbielik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 22:28:00 by pbielik           #+#    #+#             */
/*   Updated: 2021/10/10 22:28:07 by pbielik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

void	*vec_pop(t_vec *self)
{
	void		*popped;
	t_splice	splice;

	splice.index = vec_length(self) - 1;
	splice.delete_count = 1;
	splice.items = NULL;
	splice.insert_count = 0;
	popped = vec_ref(self, vec_length(self) - 1);
	vec_splice(self, &splice);
	return (popped);
}
