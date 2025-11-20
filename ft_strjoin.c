/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 10:58:47 by moamhouc          #+#    #+#             */
/*   Updated: 2025/11/16 10:32:31 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*final_str;
	int		i;
	int		j;
	size_t	strs_len;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	strs_len = ft_strlen(s1) + ft_strlen(s2);
	final_str = (char *)malloc(strs_len + 1);
	if (!final_str)
		return (NULL);
	while (s1[i])
		final_str[j++] = s1[i++];
	i = 0;
	while (s2[i])
		final_str[j++] = s2[i++];
	final_str[j] = '\0';
	return (final_str);
}
