/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:13:41 by moamhouc          #+#    #+#             */
/*   Updated: 2025/10/27 14:55:09 by moamhouc         ###   ########.fr       */
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
char	(char *s, char c)
{
	
}
char	**ft_split(char const *s, char c)
{
    int i;
    int arr_len;
	char	**array;

	i = 0;
	arr_len = ft_count_words(s, c);
	array = malloc(arr_len + 1 * sizeof(char*));
	
}
int main()
{
    char str[] = "i   think  it's   time for you to start to seriously   consider salads.";
    printf("%d", ft_count_str(str, ' '));
    
    
}
