/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_splice.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbielik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:15:41 by pbielik           #+#    #+#             */
/*   Updated: 2021/09/21 17:15:42 by pbielik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

static void	exit_on_error(unsigned int line);

void	str_splice(t_str *self, t_splice splice)
{
	if (splice.delete_count + splice.index > str_length(self))
	{
		exit_on_error(__LINE__);
	}
	else if (splice.index > str_length(self))
	{
		exit_on_error(__LINE__);
	}
	vec_splice(self, splice);
}

static void	exit_on_error(unsigned int line)
{
	fprintf(stderr, "%s:%d - Out of Bounds", __FILE__, line);
	exit(EXIT_FAILURE);
}
