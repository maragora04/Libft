/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 17:58:51 by mamendes          #+#    #+#             */
/*   Updated: 2026/05/05 19:41:35 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	while (s[i])
	{
		if (s[i] == c)
		{
			return ((char *)(s + i));
		}
		i--;
	}
	return (NULL);
}
/* #include <stdio.h>
int main()
{
	char *str = "hello world";
   printf("%s", ft_strrchr(str, 'e'));
} */