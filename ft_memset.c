/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:18:37 by moamhouc          #+#    #+#             */
/*   Updated: 2025/11/11 09:30:23 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tempo;

	tempo = (unsigned char *)b;
	while (len > 0)
	{
		*(tempo++) = (unsigned char)c;
		len--;
	}
	return (b);
}
