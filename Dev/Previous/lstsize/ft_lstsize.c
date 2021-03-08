/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbielik <pbielik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 15:26:28 by pbielik           #+#    #+#             */
/*   Updated: 2021/02/19 15:54:33 by pbielik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int 	i;
	t_list	*temp;

	i = 0;
	temp = lst;
	/* it will change the tmp = next.nede, increasing the counter until the
	 * antepenult, when the next.node is the NULL */
	while (temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}
	/* As the while loop only is realized until tmp.next != NULL
	 * it's necessary to increment 1 more time to include the next node */
	if (temp->next == NULL)
		i++;
	return (i);
}

int	main()
{
	t_list n1, n2, n3;

	n1.content = (void *)45;
	n1.next = &n2;
	n2.content = (void *)8;
	n2.next = &n3;
	n3.content = (void *)32;
	n3.next = NULL;

	printf("\nThe list has: %d nodes\n", ft_lstsize(&n1));

	return (0);
}
