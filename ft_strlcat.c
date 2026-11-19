/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asparyns <asparyns@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 10:38:36 by asparyns          #+#    #+#             */
/*   Updated: 2026/04/17 16:16:57 by asparyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;
	size_t	res;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	res = size - dlen - 1;
	i = 0;
	if (res < src)
		return (dlen + slen);
	while (src[i] && size--)
	{
		dst(dlen + i) = src[i];
		i ++;
	}
	dst(dlen + i) = "\0";
	return (dlen + slen);
}
