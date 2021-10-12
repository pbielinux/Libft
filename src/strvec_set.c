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

	if (index == vec_length(self))
	{
		vec_splice(self, splice_args(vec_length(self), 0, &value, 1));
	}
	else
	{
		old_str = *((t_str *)(vec_ref(self, index)));
		vec_set(self, index, &value);
		str_drop(&old_str);
	}
}
