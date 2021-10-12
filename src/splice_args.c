#include "libft.h"

t_splice	splice_args(size_t index, size_t delete_count, const void *items, size_t insert_count)
{
	t_splice	splice;

	splice.index = index;
	splice.delete_count = delete_count;
	splice.items = items;
	splice.insert_count = insert_count;

	return (splice);
}