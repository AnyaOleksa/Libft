/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asparyns <asparyns@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 15:43:04 by asparyns          #+#    #+#             */
/*   Updated: 2026/04/17 16:09:20 by asparyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *s, int c, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *) s;
	while (n-- > 0)
	{
		*temp++ = (unsigned char)c;
	}
	return (s);
}
