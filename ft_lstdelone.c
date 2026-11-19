/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asparyns <asparyns@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:14:01 by asparyns          #+#    #+#             */
/*   Updated: 2026/04/23 13:35:23 by asparyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lift.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst -> content);
	free(lst);
}
