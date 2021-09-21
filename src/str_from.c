/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_from.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbielik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:14:38 by pbielik           #+#    #+#             */
/*   Updated: 2021/09/21 17:14:39 by pbielik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

t_str	str_from(const char *cstr)
{
	t_str	newstr;
	int		i;
	char	null;

	null = '\0';
	i = 0;
	newstr = str_value(1);
	while (*(cstr + i) != null)
	{
		vec_set(&newstr, i, cstr + i);
		i++;
	}
	vec_set(&newstr, i, &null);
	return (newstr);
}
