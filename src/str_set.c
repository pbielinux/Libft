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
	if (index < str_length(self))
		str_splice(self, splice_args(index, 1, &value, 1));
	else if (index == str_length(self))
		str_splice(self, splice_args(index, 0, &value, 1));
	else
		exit_on_error(__LINE__);
}

static void	exit_on_error(unsigned int line)
{
	fprintf(stderr, "%s:%d - Out of Bounds", __FILE__, line);
	exit(EXIT_FAILURE);
}
