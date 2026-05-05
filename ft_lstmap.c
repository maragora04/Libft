/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 19:28:40 by mamendes          #+#    #+#             */
/*   Updated: 2026/05/05 19:55:57 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*new_contents;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	newlst = NULL;
	while (lst)
		new_contents = ft_lstnew(lst->content);
	if (new_contents == NULL)
	{
		ft_lstclear(&newlst, del);
		return (NULL);
	}
	ft_lstadd_back(&newlst, new_contents);
	lst = lst->next;
	return (newlst);
}
#include <stdio.h>

int main()
{
	
}