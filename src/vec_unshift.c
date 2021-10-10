/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_unshift.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbielik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 22:29:49 by pbielik           #+#    #+#             */
/*   Updated: 2021/10/10 22:29:51 by pbielik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

void	vec_unshift(t_vec *self, const void *value)
{
	t_splice	splice;

	splice.index = 0;
	splice.delete_count = 0;
	splice.items = value;
	splice.insert_count = 1;
	vec_splice(self, &splice);
}
