#include "vec.h"

void	vec_set(t_vec *self, size_t index, const void *value)
{
	if (index == self->length)
		vec_splice(self, index, 0, value, 1);
	else
		vec_splice(self, index, 1, value, 1);
}