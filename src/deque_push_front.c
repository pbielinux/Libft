/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_push_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbielik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 22:26:47 by pbielik           #+#    #+#             */
/*   Updated: 2021/10/10 22:26:48 by pbielik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	deque_push_front(t_deque *deque, void *content)
{
	t_deque_node	*node;

	node = deque_node_value(content);
	(deque->length)++;
	node->next = deque->head;
	if (deque_is_empty(deque))
		deque->tail = node;
	else
		deque->head->prev = node;
	deque->head = node;
}
