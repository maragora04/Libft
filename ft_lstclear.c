/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 19:12:10 by mamendes          #+#    #+#             */
/*   Updated: 2026/05/08 19:39:43 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	tmp = NULL;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
/* #include <stdio.h>

int main(void)
{
	t_list  *lst;
	t_list  *node;

	lst = ft_lstnew(ft_strdup("one"));
	node = ft_lstnew(ft_strdup("two"));
	ft_lstadd_back(&lst, node);
	node = ft_lstnew(ft_strdup("three"));
	ft_lstadd_back(&lst, node);

	printf("Before clear: ");
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");

	ft_lstclear(&lst, free);

	printf("After clear: ");
	if (lst == NULL)
		printf("NULL\nlst is NULL\n");
	return (0);
} */