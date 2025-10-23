/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:19:46 by moamhouc          #+#    #+#             */
/*   Updated: 2025/10/21 15:48:28 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  i;
    size_t  j;
    size_t  srclen;
    size_t  dstlen;
    
    i = 0;
    j = 0;
    srclen = ft_strlen(src);
    dstlen = ft_strlen(dst);
    if (dstsize == 0)
        return (srclen);
    if (dstlen <= dstsize)
        return (dstlen + srclen);
    while (dst[j])
    {
        j++;
    }        
    while (src[i] && i < dstsize - 1)
    {
        dst[j] = src[i];
        i++;
        j++;
    }
    dst[j] = 0;
    return (dstlen + srclen);
}
#include <stdio.h>
int main ()
{
    char src[] = "mohamed";
    char dst[10] = "AN";
    int a = ft_strlcat(dst, src, 3);
    printf("%s %d", dst, a);
}