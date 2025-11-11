/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:19:46 by moamhouc          #+#    #+#             */
/*   Updated: 2025/11/11 09:34:24 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_l;
	size_t	dst_l;

	src_l = ft_strlen(src);
	if (!dst && size == 0)
		return (src_l);
	dst_l = ft_strlen(dst);
	if (size <= dst_l)
		return (size + src_l);
	i = 0;
	while (src[i] && (dst_l + i + 1) < size)
	{
		dst[dst_l + i] = src[i];
		i++;
	}
	dst[dst_l + i] = '\0';
	return (dst_l + src_l);
}
