/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:31:43 by moamhouc          #+#    #+#             */
/*   Updated: 2025/11/05 10:25:58 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*src_p;
	unsigned char	*dst_p;

	if (!src && !dest)
		return (NULL);
	src_p = (unsigned char *)src;
	dst_p = (unsigned char *)dest;
	if (src_p < dst_p)
	{
		while (n > 0)
		{
			n--;
			dst_p[n] = src_p[n];
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}

// int main(void)
// {
// 	char str[] = "hello";
// 	ft_memmove(str + 2, str, 3);
// 	printf("%s",str);
// }
