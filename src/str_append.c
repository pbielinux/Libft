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
	t_splice	splice;
	char		null;

	null = '\0';
	splice.index = str_length(self);
	splice.delete_count = 0;
	splice.items = (char *)cstr;
	splice.insert_count = 0;
	while (*(cstr + splice.insert_count) != null)
	{
		splice.insert_count++;
	}
	str_splice(self, splice);
}
