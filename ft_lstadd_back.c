/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 18:42:34 by mamendes          #+#    #+#             */
/*   Updated: 2026/05/08 20:28:54 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = ft_lstlast(*lst);
	tmp->next = new;
}
/*
#include <stdio.h>

int main()
{
    t_list *list = ft_lstnew(ft_strdup("1"));
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("2")));
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("3")));
    t_list *tmp = list;
    while(tmp)
    {
        printf("%s\n", (char *)tmp->content);
        tmp = tmp->next;
    }
    ft_lstclear(&list, free);
} */