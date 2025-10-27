/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:10:36 by moamhouc          #+#    #+#             */
/*   Updated: 2025/10/27 15:47:45 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;
    
    i = 0;
    if(little[0] == '\0')
        return ((char*)big);
    while(big[i] && i < len)
    {
        j = 0;
        while(little[j] && big[i + j] == little[j] && i + j < len)
        {
            j++;
            if(little[j] == '\0')
            {
                return ((char *) big + i);
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
    char nee[] = "";
    printf("%s", ft_strnstr(hay, nee, 7));
}