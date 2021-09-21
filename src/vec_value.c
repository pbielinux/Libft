/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_value.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbielik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:17:21 by pbielik           #+#    #+#             */
/*   Updated: 2021/09/21 16:17:22 by pbielik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

t_vec	vec_value(size_t capacity, size_t item_size)
{
	t_vec	vec;

	vec.item_size = item_size;
	vec.length = 0;
	vec.capacity = capacity;
	vec.buffer = calloc(capacity, item_size);
	omm_guard(vec.buffer, __FILE__, __LINE__);
	return (vec);
}
