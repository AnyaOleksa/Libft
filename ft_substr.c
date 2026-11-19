/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asparyns <asparyns@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 10:39:17 by asparyns          #+#    #+#             */
/*   Updated: 2026/04/24 18:21:21 by asparyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*sub;

	i = 0;
	sub = (char *) malloc((len + 1) * (sizeof (char)));
	if (!sub)
		return (0);
	if (start > ft_strlen(s))
		return (0);
	while (--len)
	{
		sub[i] = s[start];
		i ++;
		start ++;
	}
	sub[i] = "/0";
	return (sub);
}
