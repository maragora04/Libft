/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:10:33 by mamendes          #+#    #+#             */
/*   Updated: 2026/05/05 20:04:13 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/* #include <stdio.h>

int main()
{
	int c = '3';
	int b = 'a';
	int a = ' ';
	printf("%d\n", ft_isdigit(c));
	printf("%d\n", ft_isdigit(b));
	printf("%d\n", ft_isdigit(a));
} */