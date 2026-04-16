/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 02:07:16 by mamendes          #+#    #+#             */
/*   Updated: 2026/04/16 03:52:21 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t res_len;
    char *result;

    res_len = ft_strlen(s1) + ft_strlen(s2) + 1;
    result = (char *)malloc(res_len * sizeof(char));
    if (result == NULL)
        return (NULL);
    ft_strlcpy(result, s1, res_len);
    ft_strlcat(result, s2, res_len);
    return(result);
}

/* #include <stdio.h>
int main()
{
    char *s1 = "ola adeus";
    char *s2 = "bom dia boa noite";
    char *res = ft_strjoin(s1, s2);
    printf("%s", res);
    free(res);
} */