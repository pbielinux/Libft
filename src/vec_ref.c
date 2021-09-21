#include "vec.h"

static void	ensure_capacity(t_vec *self, size_t n);
static void	exit_on_error(unsigned int line);

void	*vec_ref(const t_vec *self, size_t index)
{
	if (index < self->length)
		return (self->buffer + (index * self->item_size));
	else
	{
		print_stacktrace();
		exit_on_error(__LINE__);
	}
	return (NULL);
}

static void	ensure_capacity(t_vec *self, size_t n)
{
	size_t	new_capacity;

	if (n > self->capacity)
	{
		new_capacity = n * 2;
		self->buffer = realloc(self->buffer, new_capacity * self->item_size);
		omm_guard(self->buffer, __FILE__, __LINE__);
		self->capacity = new_capacity;
	}
}

static void	exit_on_error(unsigned int line)
{
	fprintf(stderr, "%s:%d - Out of Bounds\n", __FILE__, line);
	exit(EXIT_FAILURE);
}