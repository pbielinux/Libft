#include "libft.h"

t_deque *deque_value(void)
{
	t_deque	*deque;

	deque = malloc(sizeof(t_deque));
	omm_guard(deque, __FILE__, __LINE__);
	deque->head = NULL;
	deque->tail = NULL;
	deque->length = 0;
	return (deque);
}