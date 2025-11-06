/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:07:54 by moamhouc          #+#    #+#             */
/*   Updated: 2025/11/06 16:03:48 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*tempo;
	size_t			s;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	s = nmemb * size;
	tempo = malloc(s);
	if (!tempo)
		return (NULL);
	ft_bzero(tempo, s);
	return (tempo);
}
