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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*destcopy;
	unsigned char	*srccopy;

	destcopy = (unsigned char *)dest;
	srccopy = (unsigned char *)src;
	if (destcopy == NULL && srccopy == NULL)
		return (NULL);
	if (destcopy > srccopy)
	{
		while (n)
		{
			n--;
			destcopy[n] = srccopy[n];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
/* #include <stdio.h>
#include <string.h>

int main(void)
{
    char    str1[20] = "hello world";
    char    str2[20] = "hello world";

    //no overlap
    printf("Test 1 (no overlap):\n");
    printf("before: %s\n", str1);
    ft_memmove(str1, "goodbye", 7);
    printf("after:  %s\n", str1);

    //overlap dest > src
	//also compare with real memmove
    printf("Test 2 (overlap, dest > src):\n");
    printf("before: %s\n", str2);
    ft_memmove(str2 + 3, str2, 8);
	memmove(str2 + 3, str2, 8);
    printf("after:  %s\n", str2);
	printf("memmove:    %s\n", str2);

    //compare with real memmove
    char    ft[20] = "hello world";
    char    og[20] = "hello world";
    printf("vs real memmove:\n");
    ft_memmove(ft + 2, ft, 9);
    memmove(og + 2, og, 9);
    printf("ft_memmove: %s\n", ft);
    printf("memmove: %s\n", og);

    //NULL check
    printf("Test 4 (NULL):\n");
    printf("result: %p\n", ft_memmove(NULL, NULL, 5));
} */