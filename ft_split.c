/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:13:41 by moamhouc          #+#    #+#             */
/*   Updated: 2025/10/28 20:00:56 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char *s, char c)
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
char	**catch_word(char *s, char **splits, char c)
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
			while(s[i] != c && s[i])
				i++;
			splits[j] = substr(s, tmp, (i - tmp));		
		}
	}
	splits[j] = NULL;
	return(splits);
}

void	free_arr()

char	**ft_split(char const *s, char c)
{
    int i;
    int arr_len;
	char	**splits;

	if (s == NULL)
		return (NULL);
		
	i = 0;
	arr_len = count_words(s, c);
	splits = malloc(arr_len + 1 * sizeof(char*));
	splits = catch_word(s, splits, c);
}


int main()
{
    char str[] = "i   think  it's   time for you to start to seriously.";
    printf("%d", ft_split(str, ' '));
    
    
}
