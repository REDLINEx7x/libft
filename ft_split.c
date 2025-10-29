/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:13:41 by moamhouc          #+#    #+#             */
/*   Updated: 2025/10/29 09:25:34 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *s, char c)
{
    int	i;
    int	word;
    
    i = 0;
    word = 0;
    while(s[i])
    {
        if(s[i] != c && (i == 0 || s[i - 1] == c))
        {
            word++;
        }
        i++;
    }
    return(word);
}

void	free_arr(char **arr)
{
	int	i;

	i = 0;
	while(arr[i])
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
	tmp = 0;
	j = 0;
	while(s[i])
	{
		while(s[i] == c)
			i++;
		if(s[i])
		{
			tmp = i;
			while(s[i] && s[i] != c)
				i++;
			splits[j] = ft_substr(s, tmp, (i - tmp));
			if(!splits[j])
			{
				free_arr(splits);
				return (NULL);
			}
			j++;
		}
	}
	splits[j] = NULL;
	return(splits);
}

char	**ft_split(char const *s, char c)
{
    int i;
    int arr_len;
	char	**splits;

	if (!s)
		return (NULL);
		
	i = 0;
	arr_len = count_words(s, c);
	splits = malloc((arr_len + 1 )* sizeof(char*));
	if(!splits)
		return (NULL);
	splits = catch_word(s, splits, c);
	return (splits);

}

int main()
{
    char str[] = "i   think  it's   time for you to start seriously.";
	int i = 0;
    char **arr = ft_split(str, ' ');
	while(arr[i])
	{
		printf("%s\n", arr[i]);
		i++;
	}
}
