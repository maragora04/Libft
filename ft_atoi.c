/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:32:16 by mamendes          #+#    #+#             */
/*   Updated: 2026/04/15 17:52:54 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	if((c >= 7 && c <= 13) || c ==  ' ')
		return (1);
	return (0);
}
int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int result;
	
	i = 0;
	sign = 1;
	result = 0;
	while (str[i] && ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}	
	
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
/* int main()

{
	char *str = "     -1234";
	printf("%d\n", ft_atoi(str));
} */
