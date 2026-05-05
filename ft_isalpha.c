/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 16:51:24 by mamendes          #+#    #+#             */
/*   Updated: 2026/05/05 20:02:28 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/* #include <stdio.h>

int main()
{
	int c = 3;
	int b = 'a';
	int a = ' ';
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", ft_isalpha(b));
	printf("%d\n", ft_isalpha(a));
} */