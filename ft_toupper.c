/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 18:03:42 by mamendes          #+#    #+#             */
/*   Updated: 2026/04/27 19:55:42 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
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
		str1[i] = ft_toupper(str[i]);
		i++;
	}
	printf("%s\n", str1);
	free(str1);
} */