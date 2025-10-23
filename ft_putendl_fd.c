/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:44:29 by moamhouc          #+#    #+#             */
/*   Updated: 2025/10/22 14:18:24 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    int i;
    
    i = 0;
    while (s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
    write(fd, "\n", 1);
}

int main(void)
{
    // Test 1: Normal string
    ft_putendl_fd("Hello, world!", 1);

    // Test 2: Empty string
    ft_putendl_fd("", 1);

    // Test 3: Multiple calls
    ft_putendl_fd("Line 1", 1);
    ft_putendl_fd("Line 2", 1);

    // Test 4: NULL input (should do nothing, must not crash)
    ft_putendl_fd(NULL, 1);
}