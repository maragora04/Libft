/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 16:47:42 by mamendes          #+#    #+#             */
/*   Updated: 2026/04/27 16:58:17 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *elements;
	
	elements = malloc(sizeof(t_list));
	if(elements == NULL)
		return (NULL);
	elements -> content = content;
	elements -> next = NULL;
	return (elements);
}
