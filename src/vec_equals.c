#include "vec.h"

bool	vec_equals(const t_vec *self, const t_vec *other)
{
	int		current_pos;
	char	*self_char;
	char	*other_char;

	if (self->length != other->length)
		return (false);
	current_pos = 0;
	while (current_pos < (self->length * self->item_size))
	{
		self_char = (char *)(self->buffer) + current_pos;
		other_char = (char *)(other->buffer) + current_pos;
		if (*self_char != *other_char)
			return (false);
		current_pos++;
	}
	return (true);
}