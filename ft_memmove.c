/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:31:43 by moamhouc          #+#    #+#             */
/*   Updated: 2025/10/21 15:47:55 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void    *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char   *src_p;
    unsigned char   *dst_p;
    int i;
    
    i = 0;
    src_p = (unsigned char *) src;
    dst_p = (unsigned char *) dst;
    
    if(!src && !dst)
        return (NULL);
    while (len > 0)
    {
        dst_p[len] = src_p[len];
        len--;
    }
    return(dst);
    
}