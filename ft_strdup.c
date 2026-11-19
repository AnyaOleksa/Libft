/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asparyns <asparyns@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:34:51 by asparyns          #+#    #+#             */
/*   Updated: 2026/04/24 18:10:11 by asparyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*dup;
	size_t	len;

	len = ft_strlen(s1);
	dup = (char *)malloc((len + 1) * (sizeof char));
	if (!dup)
		return (NULL);
	while (i < len)
	{
		i++;
	}
	dup[i] = "\0";
	return (dup);
}
