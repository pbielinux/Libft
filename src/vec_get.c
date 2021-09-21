/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_get.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbielik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:16:07 by pbielik           #+#    #+#             */
/*   Updated: 2021/09/21 16:16:10 by pbielik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

static void	exit_on_error(unsigned int line);

void	vec_get(const t_vec *self, size_t index, void *out)
{
	if (index < self->length)
		memcpy(out, vec_ref(self, index), self->item_size);
	else
	{
		print_stacktrace();
		exit_on_error(__LINE__);
	}
}

static void	exit_on_error(unsigned int line)
{
	fprintf(stderr, "%s:%d - Out of Bounds\n", __FILE__, line);
	exit(EXIT_FAILURE);
}
