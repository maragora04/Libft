/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 03:13:26 by mamendes          #+#    #+#             */
/*   Updated: 2026/04/20 19:17:08 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_convert(int len)
{
	char *tmp;
	
	tmp = malloc((len + 1) * sizeof(char));
	if(tmp == NULL)
		return(NULL);
	tmp[0] = '0';
	return(tmp);
}

static int ft_numlen(int nbr)
{
	int count;
	
	count = 0;
	if(count < 0)
	{
		nbr = -nbr;
		count++;
	}
	if(nbr == 0)
	{
		count++;
	}
	while(nbr > 0)
	{
		nbr = nbr / 10;
		count++;
	}
	return(count);
}
char *ft_itoa(int n)
{
	int i;
    int len;
	char *nbr;
	char *res;
	
	len = ft_numlen(n);
	nbr = n;
	i = 0;
	if(n == -2147483648)
	{
		write(1, "-2147483648\n", 14);
		return ;
	}
	else if (nbr > 0)
	{
		res[i] = ft_convert(n);
        nbr = n / 10;
        i--;
		return(res);
	}
	return (0);
}
