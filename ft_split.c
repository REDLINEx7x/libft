/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:13:41 by moamhouc          #+#    #+#             */
/*   Updated: 2025/10/30 14:20:46 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			word++;
		}
		i++;
	}
	return (word);
}

void	free_arr(char **arr)
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

char	**catch_word(const char *s, char **splits, char c)
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

#include "libft.h"
#include <stdio.h>

void	print_split(char **split)
{
	int	i = 0;

	if (!split)
	{
		printf("NULL\n");
		return;
	}

	while (split[i])
	{
		printf("[%d]: \"%s\"\n", i, split[i]);
		i++;
	}
	printf("Total words: %d\n\n", i);
}

int	main(void)
{
	char **result;

	// 1️⃣ Normal split
	result = ft_split("hello world 42", ' ');
	printf("Test 1: Normal split\n");
	print_split(result);
	free_arr(result);

	// 2️⃣ Leading delimiters
	result = ft_split("   leading spaces", ' ');
	printf("Test 2: Leading delimiters\n");
	print_split(result);
	free_arr(result);

	// 3️⃣ Trailing delimiters
	result = ft_split("trailing spaces   ", ' ');
	printf("Test 3: Trailing delimiters\n");
	print_split(result);
	free_arr(result);

	// 4️⃣ Consecutive delimiters
	result = ft_split("a--b---c", '-');
	printf("Test 4: Consecutive delimiters\n");
	print_split(result);
	free_arr(result);

	// 5️⃣ Only delimiters
	result = ft_split("-----", '-');
	printf("Test 5: Only delimiters\n");
	print_split(result);
	free_arr(result);

	// 6️⃣ Empty string
	result = ft_split("", ' ');
	printf("Test 6: Empty string\n");
	print_split(result);
	free_arr(result);

	// 7️⃣ NULL input
	result = ft_split(NULL, ' ');
	printf("Test 7: NULL input\n");
	print_split(result);

	return (0);
}
















// int	main(void)
// {
// 	char	str[] = "i   think  it's   time for you to start seriously.";
// 	int		i;
// 	char	**arr;

// 	i = 0;
// 	arr = ft_split(str, ' ');
// 	while (arr[i])
// 	{
// 		printf("%s\n", arr[i]);
// 		i++;
// 	}
	
// 	free_arr(arr);
// }
