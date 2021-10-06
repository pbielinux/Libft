#include "vec.h"

void	*vec_pop(t_vec *self)
{
	void		*popped;
	t_splice	splice;

	splice.index = vec_length(self) - 1;
	splice.delete_count = 1;
	splice.items = NULL;
	splice.insert_count = 0;
	popped = vec_ref(self, vec_length(self) - 1);
	vec_splice(self, &splice);
	return (popped);
}