/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 21:35:33 by mamendes          #+#    #+#             */
/*   Updated: 2026/04/15 22:51:48 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int	little_len;

	i = 0;
	if (little[i] == '\0')
		return ((char *) big);
	little_len = ft_strlen(little);
	while (big[i] && i < len)
	{
		ft_strncmp(little, big + i, little_len);
		if(ft_strncmp(little, big + i, little_len) == 0)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
int main()
{
	char *big = "i love white monster and caffeine";
	char *small = "white monster";
	printf("%s\n", ft_strnstr(big, small, 34));
} */