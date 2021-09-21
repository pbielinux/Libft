/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_get.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbielik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:14:48 by pbielik           #+#    #+#             */
/*   Updated: 2021/09/21 17:14:50 by pbielik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

static void	exit_on_error(unsigned int line);

char	str_get(const t_str *self, size_t index)
{
	if ((index < 0) || (index >= str_length(self)))
	{
		exit_on_error(__LINE__);
	}
	return (*((char *)vec_ref(self, index)));
}

static void	exit_on_error(unsigned int line)
{
	fprintf(stderr, "%s:%d - Out of Bounds", __FILE__, line);
	exit(EXIT_FAILURE);
}
