/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_value.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbielik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 22:27:16 by pbielik           #+#    #+#             */
/*   Updated: 2021/10/10 22:27:17 by pbielik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_deque	*deque_value(void)
{
	t_deque	*deque;

	deque = malloc(sizeof(t_deque));
	omm_guard(deque, __FILE__, __LINE__);
	deque->head = NULL;
	deque->tail = NULL;
	deque->length = 0;
	return (deque);
}
