/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 19:28:40 by mamendes          #+#    #+#             */
/*   Updated: 2026/05/08 20:27:20 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*new_contents;
	void	*tmpcontent;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		tmpcontent = f(lst->content);
		new_contents = ft_lstnew(tmpcontent);
		if (!new_contents)
		{
			del(tmpcontent);
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, new_contents);
		lst = lst->next;
	}
	return (newlst);
}
