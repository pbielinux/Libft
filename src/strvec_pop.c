/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strvec_pop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbielik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:04:58 by pbielik           #+#    #+#             */
/*   Updated: 2021/09/21 17:04:59 by pbielik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_vec.h"

t_str	strvec_pop(t_strvec *self)
{
	t_str		popped_str;
	t_splice	splice;

	splice.index = vec_length(self) - 1;
	splice.delete_count = 1;
	splice.items = NULL;
	splice.insert_count = 0;
	popped_str = *((t_str *)(vec_ref(self, vec_length(self) - 1)));
	vec_splice(self, &splice);
	return (popped_str);
}
