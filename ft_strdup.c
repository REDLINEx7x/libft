/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 17:44:48 by moamhouc          #+#    #+#             */
/*   Updated: 2025/10/21 18:36:55 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strdup(const char *s1)
{
    char    *s2;
    int i;
    int s1_len;
    
    i = 0;
    s1_len = 0;
    while(s1[s1_len])
    {
        s1_len++;
    }
    s2 = malloc(1 * (s1_len + 1));
    if(!s2)
    {
        return (NULL);
    }
    while(s1[i])
    {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
    return (s2);
}
#include <stdio.h>

int main()
{
    char *str[] = "mohamed";
}