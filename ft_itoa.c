/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 13:05:47 by moamhouc          #+#    #+#             */
/*   Updated: 2025/10/25 18:57:02 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_len(long n)
{
    int nb;
    nb = 0;
    
    
    if(n == 0)
        return (1);
    if(n < 0)
    {
        n = -n;
        nb++;
    }
    
    while(n > 0)
    {
        n = n / 10;
        nb++;
    }
    return nb;
    
}

static void calcul(char *str, long n, int nb)
{
    int i;
    
    i = nb - 1;
    if(n == 0)
    {
        str[0] = '0';
    }
    if(n < 0)
    {
        str[0] = '-';
        n = -n;
    }
    while(n > 0)
    {
        str[i] = (n % 10) + 48;
        n = n / 10;
        i--; 
    }
}

char	*ft_itoa(int n)
{
    char    *cnv_str;
    int nb;
    
    nb = count_len(n);
    cnv_str = (char *) malloc(nb + 1);
    if (!cnv_str)
        return NULL;

    calcul(cnv_str, n, nb);
    cnv_str[nb] = '\0';
    return(cnv_str);
}

int main ()
{
    printf("%s\n", ft_itoa(123));
}
