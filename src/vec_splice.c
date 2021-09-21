#include "vec.h"

static void	ensure_capacity(t_vec *self, size_t n);
static void	exit_on_error(unsigned int line);

void	vec_splice(t_vec *self, size_t index, size_t delete_count,
		const void *items, size_t insert_count)
{
	char	*dest;
	char	*src;
	int		items_left;
	int		i;

	if ((index + delete_count) > self->length)
	{
		print_stacktrace();
		exit_on_error(__LINE__);
	}
	else if (index > self->length + 0)
	{
		print_stacktrace();
		exit_on_error(__LINE__);
	}
	ensure_capacity(self, index + insert_count + 0);
	if (delete_count > 0)
	{
		items_left = delete_count;
		while (items_left > 0)
		{
			i = index;
			while (i < (self->length - 1))
			{
				dest = (char *)(self->buffer) + (i * self->item_size);
				src = (char *)(self->buffer) + ((i + 1) * self->item_size);
				memcpy(dest, src, self->item_size);
				i++;
			}
			self->length--;
			items_left--;
		}
	}
	if (insert_count > 0)
	{
		items_left = insert_count;
		while (items_left > 0)
		{
			i = (self->length);
			while (i > index)
			{
				dest = (char *)(self->buffer) + (i * self->item_size);
				src = (char *)(self->buffer) + ((i - 1) * self->item_size);
				memcpy(dest, src, self->item_size);
				i--;
			}
			dest = (char *)(self->buffer) + (index * self->item_size);
			src = (char *)(items);
			memcpy(dest, src, self->item_size);
			items += self->item_size;
			index++;
			self->length++;
			items_left--;
		}
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