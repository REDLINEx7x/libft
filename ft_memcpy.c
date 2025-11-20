/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 07:07:36 by moamhouc          #+#    #+#             */
/*   Updated: 2025/11/15 18:21:41 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*src_p;
	unsigned char	*dst_p;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	src_p = (unsigned char *)src;
	dst_p = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		dst_p[i] = src_p[i];
		i++;
	}
	return (dest);
}
