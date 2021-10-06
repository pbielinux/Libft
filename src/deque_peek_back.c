#include "deque.h"

void	*deque_peek_back(t_deque *deque)
{
	if (deque_is_empty(deque))
		return (NULL);
	return (deque->tail->content);
}