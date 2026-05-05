/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 00:45:44 by mamendes          #+#    #+#             */
/*   Updated: 2026/04/10 00:45:44 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/* #include <stdio.h>

int main()
{
    char    str[] = "hello";

    printf("%s\n", str);
    ft_bzero(str, 5);
    printf("%s\n", str);
} */