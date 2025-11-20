/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:13:41 by moamhouc          #+#    #+#             */
/*   Updated: 2025/11/11 09:47:40 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			word++;
		i++;
	}
	return (word);
}

static void	free_arr(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static char	**catch_word(const char *s, char **splits, char c)
{
	int	i;
	int	tmp;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			tmp = i;
			while (s[i] && s[i] != c)
				i++;
			splits[j] = ft_substr(s, tmp, i - tmp);
			if (!splits[j])
				return (free_arr(splits), NULL);
			j++;
		}
	}
	splits[j] = NULL;
	return (splits);
}

char	**ft_split(char const *s, char c)
{
	int		arr_len;
	char	**splits;

	if (!s)
		return (NULL);
	arr_len = count_words(s, c);
	splits = malloc((arr_len + 1) * sizeof(char *));
	if (!splits)
		return (NULL);
	splits = catch_word(s, splits, c);
	return (splits);
}
