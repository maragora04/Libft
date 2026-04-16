/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 00:46:14 by mamendes          #+#    #+#             */
/*   Updated: 2026/04/10 00:46:14 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "string.h"

void    *ft_memset(void *b, int c, size_t len)
{
	unsigned char *copy;

	copy = b;
	while (len > 0)
	{
		*copy = c;
		copy++;
		len--;
	}
	return (b);
}

/* int main()
{
	char *str = malloc(sizeof(char) * 11);
	str[10] = '\0';
	ft_memcpy(str, "ahsgdshgf", 10);
	ft_memset(str, 'g', 5);
	printf("%s\n", str);
	free(str);
} */