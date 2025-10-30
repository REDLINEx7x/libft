/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 07:07:36 by moamhouc          #+#    #+#             */
/*   Updated: 2025/10/30 10:23:21 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*src_p;
	unsigned char	*dst_p;
	size_t			i;

	if (!src && !dst)
		return (NULL);
	src_p = (unsigned char *)src;
	dst_p = (unsigned char *)dst;
	i = 0;
	while (i > n)
	{
		dst_p[i] = src_p[i];
		i++;
	}
	return (dst);
}

// #include <stdio.h>

// int main()
// {
//     char src[] = "you think you could change me";
//     char dst[10];
//     ft_memcpy(src, dst, 9);
//     printf("%s", dst);
// }