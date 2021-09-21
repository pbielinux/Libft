/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_splice.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbielik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:16:59 by pbielik           #+#    #+#             */
/*   Updated: 2021/09/21 16:17:00 by pbielik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"
#include "libft.h"

static void	ensure_capacity(t_vec *self, size_t n);
static void	exit_on_error(unsigned int line);
static void	insert_items(t_vec *self, t_splice *splice);

void	vec_splice(t_vec *self, t_splice splice)
{
	if ((splice.index + splice.delete_count) > self->length)
	{
		write(1, "!\n", 2);
		exit_on_error(__LINE__);
	}
	if (splice.index > self->length)
	{
		exit_on_error(__LINE__);
	}
	ensure_capacity(self, splice.index + splice.insert_count);
	if (splice.delete_count > 0)
	{
		splice.items_left = splice.delete_count;
		while (splice.items_left > 0)
		{
			splice.i = splice.index;
			while (splice.i < (self->length - 1))
			{
				splice.dest = (char *)(self->buffer)
					+ (splice.i * self->item_size);
				splice.src = (char *)(self->buffer)
					+ ((splice.i + 1) * self->item_size);
				ft_memcpy(splice.dest, splice.src, self->item_size);
				splice.i++;
			}
			self->length--;
			splice.items_left--;
		}
	}
	if (splice.insert_count > 0)
		insert_items(self, &splice);
}

static void	insert_items(t_vec *self, t_splice *splice)
{
	splice->items_left = splice->insert_count;
	while (splice->items_left > 0)
	{
		splice->i = (self->length);
		while (splice->i > splice->index)
		{
			splice->dest = (char *)(self->buffer)
				+ (splice->i * self->item_size);
			splice->src = (char *)(self->buffer)
				+ ((splice->i - 1) * self->item_size);
			ft_memcpy(splice->dest, splice->src, self->item_size);
			splice->i--;
		}
		splice->dest = (char *)(self->buffer)
			+ (splice->index * self->item_size);
		splice->src = (char *)(splice->items);
		ft_memcpy(splice->dest, splice->src, self->item_size);
		splice->items += self->item_size;
		splice->index++;
		self->length++;
		splice->items_left--;
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
	print_stacktrace();
	fprintf(stderr, "%s:%d - Out of Bounds\n", __FILE__, line);
	exit(EXIT_FAILURE);
}
