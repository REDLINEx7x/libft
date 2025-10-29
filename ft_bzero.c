/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:02:29 by moamhouc          #+#    #+#             */
/*   Updated: 2025/10/29 18:21:11 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	fit_bzero(void *s, size_t n)
{
	unsigned char	*tempo;

	tempo = (unsigned char *)s;
	while (n > 0)
	{
		*(tempo++) = 0;
		n--;
	}
}
