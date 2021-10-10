/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbielik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 22:30:32 by pbielik           #+#    #+#             */
/*   Updated: 2021/10/10 22:30:33 by pbielik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEQUE_H
# define DEQUE_H

# include "libft.h"
# include <stdbool.h>

typedef struct s_deque_node
{
	void				*content;
	struct s_deque_node	*next;
	struct s_deque_node	*prev;
}	t_deque_node;

typedef struct s_deque
{
	size_t				length;
	struct s_deque_node	*head;
	struct s_deque_node	*tail;
}	t_deque;

t_deque			*deque_value(void);
bool			deque_is_empty(t_deque *deque);
void			deque_push_front(t_deque *deque, void *content);
void			deque_push_back(t_deque *deque, void *content);

void			*deque_pop_front(t_deque *deque);
void			*deque_pop_back(t_deque *deque);

void			*deque_peek_front(t_deque *deque);
void			*deque_peek_back(t_deque *deque);

t_deque_node	*deque_node_value(void *content);

#endif // !DEQUE_H
