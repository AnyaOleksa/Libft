/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asparyns <asparyns@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 10:39:40 by asparyns          #+#    #+#             */
/*   Updated: 2026/04/24 18:24:34 by asparyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp;
	size_t			i;

	i = 0;
	temp = (char *)malloc(count * size);
	if (!temp)
		return (NULL);
	while (i < count * size)
	{
		temp[i] = 0;
		i ++;
	}
	return (temp);
}
