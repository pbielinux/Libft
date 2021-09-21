#include "vec.h"

const void	*vec_items(const t_vec *self)
{
	return (self->buffer);
}