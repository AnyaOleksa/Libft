/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asparyns <asparyns@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:15:27 by asparyns          #+#    #+#             */
/*   Updated: 2026/04/21 12:43:59 by asparyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_delim(char i, char delim)
{
	return (i == delim);
}

static int	word_count(const char *s, char c)
{
	size_t	count;
	size_t	flag;

	flag = 0;
	count = 0;
	while (*s)
	{
		if (flag == 0 && *s != c)
		{
			flag = 1;
			count++;
		}
		if (*s == c)
			flag = 0;
		s++;
	}
	return (count);
}

static void	free_all(char **res, int i)
{
	while (i >= 0)
		free(res[i--]);
	free(res);
}

static char	*fill_word(const char *s, char c)
{
	int		i;
	int		len;
	char	*word;

	i = 0;
	len = 0;
	while (s[len] && !(is_delim(s[len], c)))
		len++;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;

	if (!s)
		return (NULL);
	res = (char **)malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (*s)
	{
		while (*s && is_delim(*s, c))
			s++;
		if (*s)
		{
			res[i] = fill_word(*s, c);
			if (!res[i])
				return (ft_free(res, i - 1), NULL);
			i++;
			while (*s && !is_delim(*s, c))
				s++;
		}
	}
	res[i] = NULL;
	return (res);
}
