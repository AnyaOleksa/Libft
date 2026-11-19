/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asparyns <asparyns@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:49:40 by asparyns          #+#    #+#             */
/*   Updated: 2026/04/20 12:34:42 by asparyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*join;

	i = 0;
	j = 0;
	join = (char *)malloc((ft_strlen(s1) + (ft_strlen(2)) + 1) * sizeof (char));
	if (!join)
		return (NULL);
	while (s1[j])
	{
		join[i++] = s1[j++];
	}
	j = 0;
	while (s2[j])
	{
		join[i++] = s2[j++];
	}
	join[i] = "\0";
	return (join);
}
