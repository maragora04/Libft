/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 18:07:38 by mamendes          #+#    #+#             */
/*   Updated: 2026/05/05 21:28:31 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	// proteger para nullo
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/* #include <stdio.h>

int main()
{
	ft_putstr_fd("hello world", 1);
	ft_putstr_fd(NULL, 1);
} */