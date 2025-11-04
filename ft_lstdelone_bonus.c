/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 09:09:43 by moamhouc          #+#    #+#             */
/*   Updated: 2025/11/04 17:29:54 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	del(void *content)
// {
// 	free(content);
// }

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
// int main()
// {
//     int *a = malloc(4);
//     int b = 5;
//     *a = 2;
//     t_list *head;
//     t_list *node = ft_lstnew(a);
//     t_list *node1 = ft_lstnew(&b);
//     node -> next = node1;
//     node1 -> next = NULL;
//     head = node;
//     ft_lstdelone(head, del); // deletes first node (frees 'a')
// }