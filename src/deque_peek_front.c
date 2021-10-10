/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_peek_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbielik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 22:25:52 by pbielik           #+#    #+#             */
/*   Updated: 2021/10/10 22:25:55 by pbielik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deque.h"

void	*deque_peek_front(t_deque *deque)
{
	if (deque_is_empty(deque))
		return (NULL);
	return (deque->head->content);
}
