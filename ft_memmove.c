/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 00:46:06 by mamendes          #+#    #+#             */
/*   Updated: 2026/04/10 00:46:06 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *destcopy;
	unsigned char *srccopy;

	destcopy = dest;
	srccopy = (unsigned char *)src;
    
	if(!destcopy && !srccopy)
		return(NULL);
	if (destcopy > srccopy)
	{
		while(n)
		{
			destcopy[n] = srccopy[n];
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return(dest);
}