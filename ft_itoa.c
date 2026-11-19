/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asparyns <asparyns@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 12:53:27 by asparyns          #+#    #+#             */
/*   Updated: 2026/04/21 13:30:18 by asparyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_nlen(long nb)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len ++;
		n = -n;
	}
	while (n != 0)
	{
		n = n / 10;
		len ++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*res;
	long	nb;

	nb = n;
	len = ft_nlen(nb);
	res = (char *)malloc((len + 1) * sizeof (char));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (nb < 0)
	{
		res[0] = '-';
		nb = -nb;
	}
	while (-- len >= 0 && res[len] != '-')
	{
		res[len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (res);
}
