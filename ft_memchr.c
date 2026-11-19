/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asparyns <asparyns@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:47:24 by asparyns          #+#    #+#             */
/*   Updated: 2026/04/17 16:25:56 by asparyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	cc;
	const char	*ss;
	void		*p;
	int			i;

	i = 0;
	cc = (const char)c;
	ss = (const char *)s;
	while (i < n)
	{
		if (ss[i] == cc)
		{
			p = ss[i];
			return (p);
		}
		i++;
	}
	return (NULL);
}
