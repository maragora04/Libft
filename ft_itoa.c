/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 03:13:26 by mamendes          #+#    #+#             */
/*   Updated: 2026/04/27 16:15:37 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_numlen(int nbr)
{
    int count;

    count = 0;
    if (nbr <= 0)
        count++;
    while (nbr != 0)
    {
        nbr /= 10;
        count++;
    }
    return (count);
}

char *ft_itoa(int n)
{
    int     len;
    char    *res;
    long    nbr;

    nbr = (long)n;
    len = ft_numlen(n);
    res = malloc((len + 1) * sizeof(char));
    if (res == NULL)
        return (NULL);
    res[len] = '\0';
    if (nbr < 0)
    {
        res[0] = '-';
        nbr = -nbr;
    }
    if (nbr == 0)
        res[0] = '0';
    while (nbr > 0)
    {
		len--;
        res[len] = '0' + (nbr % 10);
        nbr /= 10;
    }
    return (res);
}
