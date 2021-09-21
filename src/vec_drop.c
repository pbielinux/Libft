#include "vec.h"

void	vec_drop(t_vec *self)
{
	free(self->buffer);
	self->buffer = NULL;
	self->capacity = 0;
	self->length = 0;
}