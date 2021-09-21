#include "vec.h"

static void	ensure_capacity(t_vec *self, size_t n);
static void	exit_on_error(unsigned int line);

void	vec_get(const t_vec *self, size_t index, void *out)
{
	if (index < self->length)
		memcpy(out, vec_ref(self, index), self->item_size);
	else
	{
		print_stacktrace();
		exit_on_error(__LINE__);
	}
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