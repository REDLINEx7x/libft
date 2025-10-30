/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:07:54 by moamhouc          #+#    #+#             */
/*   Updated: 2025/10/29 18:29:33 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tempo;
	size_t			i;

	tempo = malloc(count * size);
	i = 0;
	if (!tempo)
		return (NULL);
	while (i < count * size)
	{
		tempo[i] = 0;
		i++;
	}
	return (tempo);
}
