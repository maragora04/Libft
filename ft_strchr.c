/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 15:39:45 by mamendes          #+#    #+#             */
/*   Updated: 2026/05/08 19:21:15 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			return ((char *)(s) + i);
		}
		i++;
	}
	if(c == '\0')
		return ((char *)(s) + i);
	return (NULL);
}

/* int main()
{
	char *str = "its a m34e53 t2t";
	printf("%s\n", ft_strchr(str, 'z'));
} */