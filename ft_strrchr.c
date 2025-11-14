/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 22:37:06 by moamhouc          #+#    #+#             */
/*   Updated: 2025/11/11 09:34:50 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	hold;

	i = 0;
	hold = c;
	if (!s)
		return (NULL);
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == hold)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
