/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_drop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbielik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:14:26 by pbielik           #+#    #+#             */
/*   Updated: 2021/09/21 17:14:27 by pbielik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

void	str_drop(t_str *self)
{
	vec_drop(self);
}