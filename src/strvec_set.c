/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strvec_set.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbielik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 23:37:54 by pbielik           #+#    #+#             */
/*   Updated: 2021/09/21 17:05:31 by pbielik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_vec.h"

void	strvec_set(t_strvec *self, size_t index, t_str value)
{
	t_str		old_str;
	t_splice	splice;

	splice.index = vec_length(self);
	splice.delete_count = 0;
	splice.items = &value;
	splice.insert_count = 1;
	if (index == vec_length(self))
	{
		vec_splice(self, &splice);
	}
	else
	{
		old_str = *((t_str *)(vec_ref(self, index)));
		vec_set(self, index, &value);
		str_drop(&old_str);
	}
}
