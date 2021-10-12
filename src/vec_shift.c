/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_shift.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbielik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 22:29:03 by pbielik           #+#    #+#             */
/*   Updated: 2021/10/10 22:29:04 by pbielik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

void	*vec_shift(t_vec *self)
{
	void		*shifted;

	shifted = vec_ref(self, 0);
	vec_splice(self, splice_args(0, 1, NULL, 0));
	return (shifted);
}
