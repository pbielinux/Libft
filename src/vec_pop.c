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
	
	popped = vec_ref(self, vec_length(self) - 1);
	vec_splice(self, splice_args(vec_length(self) - 1, 1, NULL, 0));
	return (popped);
}
