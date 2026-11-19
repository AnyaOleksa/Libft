/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asparyns <asparyns@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 12:35:30 by asparyns          #+#    #+#             */
/*   Updated: 2026/04/24 18:16:12 by asparyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	do_u_trim(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i ++;
	}
	return (0);
}

static char	*trimd_str(const char *s1, size_t start, size_t len)
{
	char	*res;
	size_t	i;

	if (len <= 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	res = ft_calloc(len + 1, sizeof (char));
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = s1[start + i];
		i ++;
	}
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;

	start = 0;
	end = (ft_strlen(s1) - 1);
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (do_u_trim(set, s1[start]))
		start++;
	while (do_u_trim(set, s1[end]))
		end --;
	len = end - (start - 1);
	return (trimd_str(s1, start, len));
}
