#include "deque.h"

bool	deque_is_empty(t_deque *deque)
{
	return (!deque->head || !deque->tail);
}