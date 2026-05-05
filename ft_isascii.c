/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:17:41 by mamendes          #+#    #+#             */
/*   Updated: 2026/05/05 20:22:51 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/* #include <stdio.h>

int main()
{
	int c = '3';
	int b = 'a';
	int a = 128;
	printf("%d\n", ft_isascii(c));
	printf("%d\n", ft_isascii(b));
	printf("%d\n", ft_isascii(a));
} */