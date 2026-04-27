/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 15:34:14 by mamendes          #+#    #+#             */
/*   Updated: 2026/04/27 20:08:20 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = ft_strlen(s);
	str = ft_calloc((len + 1), (sizeof(char)));
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/* static char ft_toupper2(unsigned int c, char a)
{
	(void) c;
	if(a >= 'a' && a <= 'z')
		return (a - 32);
	return (a);
}

#include <stdio.h>
int main()
{
	char *s = "asdkaJGHGJHGGhd3747zdgdghg";
	char *res = ft_strmapi(s, ft_toupper2);
   printf("%s\n", res);
   free(res);
} */