/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamendes <mamendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:46:39 by mamendes          #+#    #+#             */
/*   Updated: 2026/04/28 13:18:52 by mamendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
   int	i;
   int	k;
   int	count_words;

	count_words = 0;
	i = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] != c && k == 0)
		{
			k = 1;
			count_words++;
		}
		if (s[i] == c)
			k = 0;
		i++;
	}
	return (count_words);
}

static char *get_word(char const *s, char c, int start)
{
	int		i;
	int		end;
	char	*word;

	i = 0;
	end = start;
	while (s[end] != c && s[end] != '\0')
		end++;
	word = malloc(sizeof(char) * (end - start) + 1); 
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++; 
	}
	word[i] = '\0';
	return (word);
}

static void	*ft_free(char **s, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		words;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	words = count_words(s, c);
	result = ft_calloc(words, j);
	while (s[i] && j < words)
	{
		while(s[i] != c && s[i]) 
		{
			result[j] = get_word(s, c, i);
			j++;
		}
		i++;
	}
	if (result[j] == NULL)
		ft_free(result, j);
	return (result);
}
