/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 21:35:40 by mamendes          #+#    #+#             */
/*   Updated: 2026/04/27 20:02:31 by mamendes         ###   ########.fr       */
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

/* int main()
{
	char s1[11] = "ola adeus";
	char s2[7] = "adeus";
	printf("%d\n", ft_memcmp(s1, s2, 5));
} */
