#include "vec.h"

void	vec_swap(t_vec *self, size_t from, size_t to)
{
	void	*tmp;

	vec_get(self, from, &tmp);
	vec_set(self, from, vec_ref(self, to));
	vec_set(self, to, &tmp);
}