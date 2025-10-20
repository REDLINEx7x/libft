/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:18:37 by moamhouc          #+#    #+#             */
/*   Updated: 2025/10/20 15:56:24 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char   *tempo;

    tempo = (unsigned char *) b;
    while(len > 0)
    {
        *(tempo++) = (unsigned char) c;
        len--;
    }
    return (b);
}
#include <stdio.h>
int main()
{
    int x;
    ft_memset(&x, 5, 2);
    ft_memset(&x, 1337, 1);
    printf("%d", x);
}