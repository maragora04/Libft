/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 15:13:23 by mamendes          #+#    #+#             */
/*   Updated: 2026/04/24 14:01:31 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while(i < n && (s1[i] || s2[i]))
	{
		if(s1[i] != s2[i])
			return ((unsigned char) s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
