/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asparyns <asparyns@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 17:24:53 by asparyns          #+#    #+#             */
/*   Updated: 2026/04/17 16:11:42 by asparyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int			i;
	char		*dp;
	const char	*sp;

	dp = (char) *dest;
	sp = (const char) *src;
	while (n-- > 0)
		*dp++ = *sp++;
	return (dest);
}
