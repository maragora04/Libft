/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 22:53:45 by mamendes          #+#    #+#             */
/*   Updated: 2026/04/15 23:12:01 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char *s_copy;

	i = 0;
    s_copy = (unsigned char *)s;
	while(s_copy[i] && i < n)
	{
		if(s_copy[i] == c)
		{
			return((char *)(s + i));
		}
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>

int main()
{
   char *s = "agfkhgdlaifhjsfgskdjf"; 
   printf("%s\n", (char *)ft_memchr(s, 'i', 5));
} */