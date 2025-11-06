/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 08:25:59 by moamhouc          #+#    #+#             */
/*   Updated: 2025/11/06 14:35:38 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
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
//     char s[] = "AKAJlsk0099ksjshdhdhdAJ";
// 	void (*f) (unsigned int, char *) = 	NULL;
//     ft_striteri(s, f);
//     printf("%s", s);

// }