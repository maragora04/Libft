/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 17:58:51 by mamendes          #+#    #+#             */
/*   Updated: 2026/04/27 18:24:47 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s) - 1;
	while(s[i])
	{
		if(s[i] == c)
		{
			return((char *)(s + i));
		}
		i--;
	}
	return (NULL);
}
/* #include <stdio.h>
int main()
{
	char *str = "o daniel e um amigo muito escuro";
   printf("%s", ft_strrchr(str, 'e'));
} */