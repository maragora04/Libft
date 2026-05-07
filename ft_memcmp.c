/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 21:35:40 by mamendes          #+#    #+#             */
/*   Updated: 2026/05/07 17:22:34 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_copy;
	unsigned char	*s2_copy;

	s2_copy = (unsigned char *)s2;
	s1_copy = (unsigned char *)s1;
	i = 0;
	while (i < n)
	{
		if (s1_copy[i] != s2_copy[i])
		{
			return (s1_copy[i] - s2_copy[i]);
		}
		i++;
	}
	if (i == n)
		return (0);
	return (s1_copy[i] - s2_copy[i]);
}

/* #include <stdio.h>
#include <string.h>

int main()
{
	// 0 diff
	printf("0 diff test result: %d\n", ft_memcmp("hello", "hello", 5));
	
	//n = 0 
	printf("n = 0 test result: %d\n", ft_memcmp("hello", "world", 0));
	
	//negative value a < z, first byte
	printf("neg value, first byte test result:%d\n", ft_memcmp("abc", "zbc", 3));
	
	//negative value a < z, last byte
	printf("neg value, last byte test result: %d\n", ft_memcmp("hella", "hellz", 5));
	
	//positive value z > a
	printf("pos value test result: %d\n", ft_memcmp("hellz", "hella", 5));
	
	//vs real memcmp
	printf("real memcmp result: %d\n", memcmp("hello", "hello world", 5));
	printf("my memcmp result: %d\n", ft_memcmp("hello", "hello world", 5));
} */
