/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 08:55:20 by moamhouc          #+#    #+#             */
/*   Updated: 2025/10/28 09:52:51 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int checkset(const char *set, char c)
{
    int i;
    
    i = 0;
    while(set[i])
    {
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);
}

char    *ft_strtrim(const char *s1, const char *set)
{
    char    *result;
    int i;
    int j;
    int len;
    if(s1 == 0 || set == 0)
        return NULL;
    i = 0;
    while(s1[i] && checkset(set, s1[i]))
        i++;
    j = ft_strlen(s1) - 1;
    while(j >= i && checkset(set, s1[j]))
        j--;
    len = (j - i) + 1;
    result = (char *) malloc(len + 1);
    if(!result)
        return (NULL);
    result = ft_substr(s1, i, len);
    return (result);
}


int main() {
    char const *s1 = "   Hello World!   ";
    char const *set = " ";
        printf("%s\n", ft_strtrim(s1, set));
    return 0;
}