#include "deque.h"

void	*deque_peek_front(t_deque *deque)
{
	if (deque_is_empty(deque))
		return (NULL);
	return (deque->head->content);
}