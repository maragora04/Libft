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

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*copy;

	copy = b;
	while (len > 0)
	{
		*copy = c;
		copy++;
		len--;
	}
	return (b);
}
/* #include <stdio.h>
#include <string.h>

int main()
{
	//base case
	char str[12] = "hello world";
	ft_memset(str, 'g', 5);
	printf("base case result: %s\n", str);

	//vs real memset
	char ft[12] = "hello world";
	char og[12] = "hello world";
	ft_memset(ft, 'g', 5);
	memset(og, 'g', 5);
	printf("my memset result: %s\n", ft);
	printf("og memset result: %s\n", og);

	//len = 0
	char str1[6] = "hello";
	ft_memset(str1, 'z', 0);
	printf("len = 0 result: %s\n", str1);

	//fill everything
	char str2[6] = "hello";
	ft_memset(str2, 'a', 5);
	printf("fill everything result: %s\n", str2);

	//fill everything with \0
	char str3[6] = "hello";
	ft_memset(str3, 0, 5);
	printf("fill everything with null result: %s\n", str3);

	//fill only part of a buffer
	char str4[] = "hello world";
	ft_memset(str4 + 5, '-', 3);
	printf("mid buffer result: %s\n", str4);

	//fill with a number
	char num[5];
	ft_memset(num, 42, 5);
	num[5] = '\0';
	printf("fill with number result: %s\n", num);

	//truncation
	//memset receives an int (32 bits) but stores as unsigned char (8 bits)
	//unsigned char can hold 0 to 255
	//int can hold up to around 2 billion
	char buf[5];
	ft_memset(buf, 256, 5);
	int i = 0;
	while (i < 5)
	{
    	printf("truncation test result[%d] = %d\n", i, (unsigned char)buf[i]);
    	i++;
	}

	//256 in binary  = 1 00000000  - 9 bits
	//unsigned char  =   00000000  - only 8 bits fit
	//result         = 0

	//large buffer

	char big[1000];
	ft_memset(big, 'z', 1000);
	printf("large buffer result: %s\n", big);
} */