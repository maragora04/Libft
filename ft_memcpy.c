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

	if (!dest || !src)
		return (NULL);
	i = 0;
	destcopy = (unsigned char *)dest;
	srccopy = (unsigned char *)src;
	while (i < n)
	{
		destcopy[i] = srccopy[i];
		i++;
	}
	return (dest);
}
/* #include <stdio.h>
#include <string.h>

int main()
{
	//base case
    char    *str1 = malloc(20);	

    printf("base case:\n");
    printf("before: %s\n", str1);
    ft_memcpy(str1, "hello world", 12);
    printf("after:  %s\n", str1);
	free(str1);

    //compare with real memcpy
    char    *ft = malloc(12);
	char	*og =  malloc(12);
    printf("vs real memcpy:\n");
    ft_memcpy(ft, "hello world", 12);
    memcpy(og, "hello world", 12);
    printf("ft_memcpy result: %s\n", ft);
    printf("memcpy result: %s\n", og);
	free(ft);
	free(og);

	//EDGE CASES
    //NULL check
    printf("NULL test result: %p\n", ft_memcpy(NULL, NULL, 5));

	//copying into the middle of a buffer
	char dest1[] = "xxxxxxxxxx";
	ft_memcpy(dest1 + 3, "hello", 5);
	printf("buffer result: %s\n", dest1);

	//large copy / stress test
	char src2[1000];
	char dest2[1000];

	ft_memset(src2, 'A', 1000);
	ft_memcpy(dest2, src2, 1000);
	printf("large copy result: %s\n", dest2);

	//copying diff data type
	int src3[] = {1, 2, 3};
	int dest3[] = {0, 0, 0};
	ft_memcpy(dest3, src3, sizeof(int) * 3);

	int j = 0;
	while (j < 3)
	{
    	printf("result dest3[%d] : %d\n", j, dest3[j]);
    	j++;
	}

	//n = 0
	char *dest4 = malloc(12);
	ft_memset(dest4, 0, 12);
	ft_memcpy(dest4, "hello world", 0);
	printf("n = 0 result: %s\n", dest4);

	//minimum copy
	char	*dest = malloc(1);
	ft_memcpy(dest, "a", 1);
	dest[1] = '\0';
	printf("min copy result: %s\n", dest);
	free(dest);
} */