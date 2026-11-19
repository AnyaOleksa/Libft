/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asparyns <asparyns@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:02:41 by asparyns          #+#    #+#             */
/*   Updated: 2026/04/24 12:13:17 by asparyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)); 
{ 
	t_list	*new_lst;
	t_list	*new_obj;
	void	*content;

	new_lst = NULL; 
	if (!(del) || !(f) || !(lst))
		return	NULL; 
	while (lst)
   	{
		content = f(lst -> content);
		new_obj = ft_lstnew(content); 
		if (!new_obj)
		{
			del(content);
			ft_lstclear(&new_lst, del); 
			return NULL; 
		}
		ft_lstadd_back(&new_lst, new_obj); 
		lst = lst -> next; 
	}
	return (new_list);
}
