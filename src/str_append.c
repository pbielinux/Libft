/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_append.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbielik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:14:03 by pbielik           #+#    #+#             */
/*   Updated: 2021/09/21 17:14:04 by pbielik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

void	str_append(t_str *self, const char *cstr)
{
	size_t	i;

	i = 0;
	while (*(cstr + i) != '\0')
		i++;
	str_splice(self, splice_args(str_length(self), 0, cstr, i));
}
