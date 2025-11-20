/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:17:28 by moamhouc          #+#    #+#             */
/*   Updated: 2025/11/12 20:50:16 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	hold;
	int		i;

	i = 0;
	hold = c;
	if (s == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] == hold)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == hold)
		return ((char *)s + i);
	return (NULL);
}
