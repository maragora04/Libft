/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 01:46:03 by mamendes          #+#    #+#             */
/*   Updated: 2026/04/27 18:27:12 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    int i;
    char *str;
    size_t s_len;

    i = 0;
    len = ft_strlen(str);
    s_len = ft_strlen(s);
    if(s == NULL)
        return (NULL);
    if(start > s_len)
        return (ft_strdup(""));
    if(start + len > s_len)
    {
		
    }
	return (NULL);
}