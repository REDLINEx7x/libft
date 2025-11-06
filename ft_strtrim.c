/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 08:55:20 by moamhouc          #+#    #+#             */
/*   Updated: 2025/11/04 17:12:57 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkset(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*result;
	int		i;
	int		j;
	int		len;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	while (s1[i] && checkset(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (j > i && checkset(set, s1[j - 1]))
		j--;
	len = j - i;
	result = ft_substr(s1, i, len);
	return (result);
}

// int	main(void)
// {
// 	char const *s1 = "   Hello World!   ";
// 	char const *set = " ";
// 	printf("%s\n", ft_strtrim(s1, set));
// 	return (0);
// 	free(ft_strtrim(s1, set));

// #include <stdio.h>

// int main(void)
// {
//     char *s;

//     s = ft_strtrim("  hello  ", " ");
//     printf("'%s'\n", s); // 'hello'
//     free(s);

//     s = ft_strtrim("--abc--", "-");
//     printf("'%s'\n", s); // 'abc'
//     free(s);

//     s = ft_strtrim("xxx", "x");
//     printf("'%s'\n", s); // ''
//     free(s);

//     s = ft_strtrim("", " ");
//     printf("'%s'\n", s); // ''
//     free(s);
// }
