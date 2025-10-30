/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 22:20:20 by moamhouc          #+#    #+#             */
/*   Updated: 2025/10/30 09:58:43 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcl;
	size_t	i;

	srcl = 0;
	i = 0;
	while (src[srcl])
	{
		srcl++;
	}
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (srcl);
}

// int main ()
// {
//     char src[] = "mohamed";
//     char dst[5];
//     ft_strlcpy(dst, src, 5);
//     printf("%s", dst);
// }