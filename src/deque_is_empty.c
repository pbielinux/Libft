/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_is_empty.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbielik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 22:25:12 by pbielik           #+#    #+#             */
/*   Updated: 2021/10/10 22:25:14 by pbielik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deque.h"

bool	deque_is_empty(t_deque *deque)
{
	return (!deque->head || !deque->tail);
}
