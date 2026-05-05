/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 14:32:19 by mamendes          #+#    #+#             */
/*   Updated: 2026/05/05 21:40:21 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	what_to_trim(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*str;

	start = 0;
	if (s1 == NULL)
		return (ft_strdup(""));
	if (set == NULL)
		return (ft_strdup(s1));
	end = ft_strlen(s1) - 1;
	while (what_to_trim(set, s1[start]))
		start++;
	if (start == ft_strlen(s1))
		return (ft_strdup(""));
	while (what_to_trim(set, s1[end]))
		end--;
	len = (end + 1) - start + 1;
	str = ft_calloc((len), sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1 + start, len);
	return (str);
}
/* #include <stdio.h>

int main()
{
	char *c = "b";
   char *s = "bbbbbbbbb olaaaaaa bbbbbbbbbbb";
   char *res = ft_strtrim(s, c);
   printf("%s\n", res);
   free(res);
} */