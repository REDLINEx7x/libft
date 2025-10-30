/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 13:05:47 by moamhouc          #+#    #+#             */
/*   Updated: 2025/10/29 18:48:01 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long n)
{
	int	nb;

	nb = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		nb++;
	}
	while (n > 0)
	{
		n = n / 10;
		nb++;
	}
	return (nb);
}

static void	calcul(char *str, long n, int nb)
{
	int	i;

	i = nb - 1;
	if (n == 0)
	{
		str[0] = '0';
		return ;
	}
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		str[i] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
}

char	*ft_itoa(int n)
{
	long	ng;
	int		nb;
	char	*cnv_str;

	ng = n;
	nb = count_digits(ng);
	cnv_str = ft_calloc(nb + 1, sizeof(char));
	if (!cnv_str)
		return (NULL);
	calcul(cnv_str, ng, nb);
	return (cnv_str);
}
