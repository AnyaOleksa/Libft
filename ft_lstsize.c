/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asparyns <asparyns@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:34:50 by asparyns          #+#    #+#             */
/*   Updated: 2026/04/24 18:28:03 by asparyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	temp;

	temp = lst;
	while (temp)
	{
		temp = temp -> next;
		i ++;
	}
	return (i);
}
