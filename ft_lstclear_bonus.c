/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:10:12 by moamhouc          #+#    #+#             */
/*   Updated: 2025/11/04 17:29:44 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void	del(void *content)
// {
// 	free(content);
// }

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}
// int main()
// {
// 	int *c = malloc(4);
// 	int *b = malloc(4);
// 	int *a = malloc(4);
// 	int *d = malloc(4);
// 	*a = 1;
// 	*b = 2;
// 	*c = 3;
// 	*d = 4;

// 	t_list *node1 = ft_lstnew(&a);
// 	t_list *node2 = ft_lstnew(&b);
// 	t_list *node3 = ft_lstnew(&c);
// 	t_list *node4 = ft_lstnew(&d);
// 	node1->next = node2;
// 	node2-> next = node3;
// 	node3 -> next = node4;
// 	node4->next = NULL;
// 	ft_lstclear(&node1, del);
// }