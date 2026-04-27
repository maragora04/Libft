/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 00:45:56 by mamendes          #+#    #+#             */
/*   Updated: 2026/04/10 00:45:56 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*destcopy;
	unsigned char	*srccopy;
	size_t			i;

	i = 0;
	destcopy = dest;
	srccopy = (unsigned char *)src;
	while (n)
	{
		destcopy[i] = srccopy[i];
		i++;
		n--;
	}
	return (dest);
}
