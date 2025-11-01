/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:25:00 by moamhouc          #+#    #+#             */
/*   Updated: 2025/11/01 15:51:02 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
    t_list	*new;
	new = malloc(sizeof(t_list));
	if(!new)
	{
		free(new);
		return (NULL);
	}
	new -> next = NULL;
	new -> content = content;
	return (new);
}
// int main() 
// {
// 	int a = 97;
// 	t_list *node = ft_lstnew(&a);
// 	printf("%c\n", *(char *)node -> content);
// 	free(node);
// }