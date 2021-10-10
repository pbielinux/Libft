/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbielik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 22:27:50 by pbielik           #+#    #+#             */
/*   Updated: 2021/10/10 22:27:51 by pbielik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

void	vec_swap(t_vec *self, size_t from, size_t to)
{
	void	*tmp;

	vec_get(self, from, &tmp);
	vec_set(self, from, vec_ref(self, to));
	vec_set(self, to, &tmp);
}
