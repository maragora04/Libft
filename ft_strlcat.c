/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 15:23:39 by mamendes          #+#    #+#             */
/*   Updated: 2026/05/08 18:13:00 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dest_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dst);
	if (dest_len >= size)
		dest_len = size;
	if (dest_len == size)
		return (src_len + size);
	if (src_len < size - dest_len)
		ft_memcpy(dst + dest_len, src, src_len + 1);
	else
	{
		ft_memcpy(dst + dest_len, src, size - dest_len - 1);
		dst[size - 1] = '\0';
	}
	return (dest_len + src_len);
}
/* 
#include <bsd/string.h>
#include <stdio.h>
int main()
{
    //compile with -ldsd
	//base case
	char src[] = "ola";
	char dest[] = "adeus";
    ft_strlcat(dest, src, 11);
	printf("base case result: %s\n", dest);
    char srcog[] = "ola";
    char destog[] = "adeus";
    strlcat(destog, srcog, 11);
	printf("vs og result: %s\n", destog);
	
	//size 0 empty strings
	char src1[] = "";
	char dest1[] = "";
    ft_strlcat(dest1, src1, 0);
	printf("size 0 result: %s\n", dest1);
    strlcat(dest1, src1, 0);
	printf("vs og result: %s\n", dest1);
	printf("print size: %zu\n", ft_strlcat(src1, dest1, 0));
	
	//size 0 non empty strings
	char src2[] = "ola";
	char dest2[] = "adeus";
    ft_strlcat(dest2, src2, 0);
	printf("now non empty str res: %s\n", dest2);
    strlcat(dest2, src2, 0);
	printf("vs og res: %s\n", dest2);
} */