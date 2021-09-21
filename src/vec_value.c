#include "vec.h"

t_vec	vec_value(size_t capacity, size_t item_size)
{
	t_vec	vec;

	vec.item_size = item_size;
	vec.length = 0;
	vec.capacity = capacity;
	vec.buffer = calloc(capacity, item_size);
	omm_guard(vec.buffer, __FILE__, __LINE__);
	return (vec);
}