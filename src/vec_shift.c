#include "vec.h"

void	*vec_shift(t_vec *self)
{
	void		*shifted;
	t_splice	splice;

	splice.index = 0;
	splice.delete_count = 1;
	splice.items = NULL;
	splice.insert_count = 0;
	shifted = vec_ref(self, 0);
	vec_splice(self, &splice);
	return (shifted);
}