/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:10:36 by moamhouc          #+#    #+#             */
/*   Updated: 2025/10/20 18:31:31 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_strnst(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;
    
    i = 0;
    
    if(!needle)
    {
        return(haystack);
    }
    while(haystack[i] && i < len)
    {
        j = 0;
        while(haystack[i + j] == needle[j] && i + j < len)
        {
            j++;
            if(needle[j + 1] == '0')
            {
                return ((char *)&haystack[i])
            }
        }
        i++;
    }
    return (0); 
}

#include <stdio.h>
int main()
{
    char hay[] = "the one who runs the world";
    char nee[] = "one";
    printf("%s", ft_strnstr(hay, nee, 5));
}