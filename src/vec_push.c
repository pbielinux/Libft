#include "vec.h"

void	vec_push(t_vec *self, void *value)
{
	vec_set(self, vec_length(self), value);
}