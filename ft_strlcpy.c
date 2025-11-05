/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 22:20:20 by moamhouc          #+#    #+#             */
/*   Updated: 2025/11/05 12:13:49 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_l;
	size_t	i;

	src_l = 0;
	i = 0;
	while (src[src_l])
		src_l++;
	if(size == 0)
	{
		return(src_l);
	}
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_l);
}

// int main ()
// {
//     char src[] = "mohamed";
//     char dst[5];
//     ft_strlcpy(dst, src, 5);
//     printf("%s", dst);
// }