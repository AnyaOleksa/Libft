/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asparyns <asparyns@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 17:36:55 by asparyns          #+#    #+#             */
/*   Updated: 2026/04/17 16:13:39 by asparyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*sp;
	char		*dp;

	sp = src;
	dp = dest;
	if (dp < sp)
	{
		while (n-- > 0)
			*dp++ = sp++;
		return (dest);
	}
	if (dp > sp)
	{
		while (--n >= 0)
			*dp + n = *sp + n;
		return (dest);
	}
}
