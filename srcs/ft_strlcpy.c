/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbielik <pbielik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 17:34:35 by pbielik           #+#    #+#             */
/*   Updated: 2021/03/08 19:32:12 by pbielik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t maxlen)
{
	size_t srclen;

	srclen = ft_strlen(src);
	if (!dest || !src)
		return (0);
	if (maxlen == 0)
	{
		while (src[srclen])
			srclen++;
		return (srclen);
	}
	if (srclen + 1 < maxlen)
		ft_memcpy(dest, src, srclen + 1);
	else if (maxlen != 0)
	{
		ft_memcpy(dest, src, (maxlen - 1));
		dest[(maxlen - 1)] = '\0';
	}
	return (srclen);
}
