#include "deque.h"

void	*deque_pop_front(t_deque *deque)
{
	t_deque_node	*node;
	void			*content;

	if (deque_is_empty(deque))
		return (NULL);
	(deque->length)--;
	node = deque->head;
	deque->head = node->next;
	if (!deque->head)
		deque->tail = NULL;
	else
		deque->head->prev = NULL;
	content = node->content;
	free(node);
	return (content);
}