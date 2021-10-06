#include "libft.h"

t_deque_node *deque_node_value(void *content)
{
	t_deque_node	*node;
	
	node = malloc(sizeof(t_deque_node));
	omm_guard(node, __FILE__, __LINE__);
	node->content = content;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}