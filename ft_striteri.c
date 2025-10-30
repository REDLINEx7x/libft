/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 08:25:59 by moamhouc          #+#    #+#             */
/*   Updated: 2025/10/27 09:06:34 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lowcase(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32;
}

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// void ft_lowcase(unsigned int i, char *c)
// {
// 	if (*c >= 'A' && *c <= 'Z')
//  		*c = *c + 32;
// }

// int main()
// {
//     char s[] = "AKAJAKAJ";
//     ft_striteri(s, ft_lowcase);
//     printf("%s", s);

// }