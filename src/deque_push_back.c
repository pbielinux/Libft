#include "libft.h"

void	deque_push_back(t_deque *deque, void *content)
{
	t_deque_node	*node;

	node = deque_node_value(content);
	(deque->length)++;
	node->prev = deque->tail;
	if (deque_is_empty(deque))
		deque->head = node;
	else
		deque->tail->next = node;
	deque->tail = node;
}