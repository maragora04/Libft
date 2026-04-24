/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 18:12:27 by mamendes          #+#    #+#             */
/*   Updated: 2026/04/24 18:41:06 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int i;
	
	i = 0;
	while(s[i])
	{
		f(i, s);
		i++;
	}
}
/* static void ft_toupper2(unsigned int i, char *c)
{
	if(c[i] >= 'a' && c[i] <= 'z')
	{
		*(c + i) -= 32;
	}
}

#include <stdio.h>
int main()
{
	char *s = ft_strdup("asdkaJGHGJHGGhd3747zdgdghg");
	ft_striteri(s, ft_toupper2);
	printf("%s\n", s);
	free(s);
}  */