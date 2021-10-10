/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_peek_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbielik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 22:25:22 by pbielik           #+#    #+#             */
/*   Updated: 2021/10/10 22:25:23 by pbielik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deque.h"

void	*deque_peek_back(t_deque *deque)
{
	if (deque_is_empty(deque))
		return (NULL);
	return (deque->tail->content);
}
