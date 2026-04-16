/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 15:23:39 by mamendes          #+#    #+#             */
/*   Updated: 2026/04/16 03:48:37 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dest_len;
	
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dst); 
	if(dest_len >= size)
		dest_len = size;
	if(dest_len == size)
		return(src_len + size);
	if(src_len < size - dest_len)
		ft_memcpy(dst + dest_len, src, src_len + 1);
	else
	{
		ft_memcpy(dst + dest_len, src, size - dest_len - 1);
		dst[size - 1] = '\0';
	}
	return(dest_len + src_len);
}
/* int main()
{
	char src[4] = "ola";
	char dest[10] = "adeus";
	ft_strlcat(src, dest, 10);
	printf("%s\n", src);
} */