/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 18:08:28 by mamendes          #+#    #+#             */
/*   Updated: 2026/04/15 18:38:55 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(int c)
{
	if(c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/* int main()
{
	char *str = "OlA AmiGoS";
	char *str1 = malloc(sizeof(char) * 11);
	str1[10] = '\0';
	int i = 0;
	while(str[i])
	{
		str1[i] = ft_tolower(str[i]);
		i++;
	}
	printf("%s\n", str1);
	free(str1);
} */