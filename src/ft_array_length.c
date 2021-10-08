#include "libft.h"

size_t	ft_array_length(void **array)
{
	size_t	length;

	length = 0;
	while (array[length] != NULL)
		length++;
	return (length);
}