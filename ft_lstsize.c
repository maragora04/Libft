/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 17:04:27 by mamendes          #+#    #+#             */
/*   Updated: 2026/04/27 18:16:36 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int i;
	t_list *tmp;
	
	i = 0;
	tmp = lst;
	if(tmp == NULL)
		return (0);
	while(tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

/* #include <stdio.h>
int main()
{
	t_list *tmp;
	tmp = ft_lstnew("4");
	tmp->next = ft_lstnew("5");
	tmp->next->next = ft_lstnew("6");
	tmp->next->next->next = ft_lstnew("7");
   printf("%d", ft_lstsize(tmp));
} */