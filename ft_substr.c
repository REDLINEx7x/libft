/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 14:20:07 by moamhouc          #+#    #+#             */
/*   Updated: 2025/10/23 10:26:27 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(const char *s, unsigned int start, size_t len)
{
    int    i;
    char    *sub_str;
    int s_len;
    
    i = 0;
    s_len = ft_strlen(s);
    if(!s)
        return (NULL);
    if(s_len <= start)
        return (ft_strdup(""));
    sub_str = (char *) malloc(1 * len + 1);
    if (!sub_str)
        return (NULL);
    while (start < len)
    {
        sub_str[i] = s[start];
        i++;
        start++;
    }
    return (sub_str);
}

#include <stdio.h>

int main ()
{
    char str[] = "dont drink and drive but if u did call me";
    printf("%s", ft_substr(str, 6, 10));
}