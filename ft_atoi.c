/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:42:49 by moamhouc          #+#    #+#             */
/*   Updated: 2025/10/19 16:00:33 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_spaces(char c)
{
    if(c == '\t' || c == '\n' || c == '\v' 
        || c == ' ' || c == '\r' || c == '\f')
        {
            return (1);
        }
        return (0);
}

int atoi(const char *str)
{
    int i;
    int result;
    int sign;
    
    i = 0;
    result = 0;
    sign = 1;
    while(ft_spaces(str[i]))
    {
        i++;
    }
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
        {
            sign = sign * -1;
        }
        i++;
    }
    while(str[i] >= 48 && str[i] <= 57)
    {
        result = result * 10 + (str[i] - 48);
        i++;
    }
    if(result > LLONG_MAX \ 10 || result == LLONG_MAX / 10)
    {
        if(sing = 1)
            return (-1)
        else
            return (0)
    }
    return (result * sign);
}