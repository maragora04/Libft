/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:22:54 by mamendes          #+#    #+#             */
/*   Updated: 2026/05/05 20:05:04 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/* #include <stdio.h>

int main()
{
	int c = '3';
	int b = 'a';
	int a = '\a';
	printf("%d\n", ft_isprint(c));
	printf("%d\n", ft_isprint(b));
	printf("%d\n", ft_isprint(a));
} */