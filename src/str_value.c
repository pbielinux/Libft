/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_value.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbielik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:15:52 by pbielik           #+#    #+#             */
/*   Updated: 2021/09/21 17:15:54 by pbielik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

t_str	str_value(size_t capacity)
{
	t_str	s;
	char	null;

	null = '\0';
	s = vec_value(capacity + 1, sizeof(char));
	vec_set(&s, 0, &null);
	return (s);
}
