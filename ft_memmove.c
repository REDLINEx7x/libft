/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:31:43 by moamhouc          #+#    #+#             */
/*   Updated: 2025/11/16 10:32:22 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*src_p;
	unsigned char	*dst_p;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	src_p = (unsigned char *)src;
	dst_p = (unsigned char *)dest;
	if (src_p < dst_p)
		while (n-- > 0)
			dst_p[n] = src_p[n];
	else
	{
		i = 0;
		while (i < n)
		{
			dst_p[i] = src_p[i];
			i++;
		}
	}
	return (dest);
}
