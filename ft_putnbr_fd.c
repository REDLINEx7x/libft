/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:49:29 by moamhouc          #+#    #+#             */
/*   Updated: 2025/10/22 09:52:48 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

void    ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
    {
        write(fd, "-2147483648", 11);
        return;
    }
    if(n < 0)
    {
        ft_putchar_fd('-', fd);
        n = n * -1;
    }
    if (n > 9)
    {
        ft_putnbr_fd (n / 10, fd);
    }
    ft_putchar_fd((n % 10) + '0', fd);
}

int main()
{
    ft_putnbr_fd(-2147483648, 2);
}