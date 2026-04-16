/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 00:47:59 by mamendes          #+#    #+#             */
/*   Updated: 2026/04/10 00:47:59 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t    i;
	
	i = 0;
	if (dsize > 0)
	{
		while (src[i] && i < dsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/* int main()
{
	char *src = "ola adeus";
	char *dest = malloc(sizeof(char) * 11);
	ft_strlcpy(dest, src, 6);
	printf("%s", dest);
} */