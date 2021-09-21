/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_set.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbielik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:15:27 by pbielik           #+#    #+#             */
/*   Updated: 2021/09/21 17:15:28 by pbielik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

static void	exit_on_error(unsigned int line);

void	str_set(t_str *self, size_t index, const char value)
{
	t_splice	splice;

	splice.index = index;
	splice.delete_count = 1;
	splice.items = &value;
	splice.insert_count = 1;
	if (index < str_length(self))
	{
		str_splice(self, splice);
	}
	else if (index == str_length(self))
	{
		splice.delete_count = 0;
		str_splice(self, splice);
	}
	else
		exit_on_error(__LINE__);
}

static void	exit_on_error(unsigned int line)
{
	fprintf(stderr, "%s:%d - Out of Bounds", __FILE__, line);
	exit(EXIT_FAILURE);
}
