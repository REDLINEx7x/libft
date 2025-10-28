/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:56:34 by moamhouc          #+#    #+#             */
/*   Updated: 2025/10/28 18:32:22 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void    *ft_memchr(const void *s, int c, size_t n)
{
    char    *ptr;
    char    c_p;
    int     i;
    
    
    ptr = (unsigned char *) s;
    i = 0;
    if(!s)
        return (NULL);
    while(i < n)
    {
        if(ptr[i] == (unsigned char) c)
            return(ptr + i);
        i++;
    }
    return (0);
}
int main()
{
    char src[] = "you think you could change me";
    printf("%s", ft_memchr(src, 'k', 9));
}