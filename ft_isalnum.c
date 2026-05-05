/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:14:34 by mamendes          #+#    #+#             */
/*   Updated: 2026/05/05 20:02:47 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
/* #include <stdio.h>

int main()
{
	int c = 3;
	int b = 'a';
	int a = ' ';
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", ft_isalnum(b));
	printf("%d\n", ft_isalnum(a));
} */