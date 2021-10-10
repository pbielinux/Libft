/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_pop_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbielik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 22:26:14 by pbielik           #+#    #+#             */
/*   Updated: 2021/10/10 22:26:16 by pbielik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deque.h"

void	*deque_pop_back(t_deque *deque)
{
	t_deque_node	*node;
	void			*content;

	if (deque_is_empty(deque))
		return (NULL);
	(deque->length)--;
	node = deque->tail;
	deque->tail = node->prev;
	if (!deque->tail)
		deque->head = NULL;
	else
		deque->tail->next = NULL;
	content = node->content;
	free(node);
	return (content);
}
