/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 14:16:48 by moamhouc          #+#    #+#             */
/*   Updated: 2025/11/02 15:56:16 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	int x = 87;
// 	int y = 1;
// 	t_list *head = NULL;
// 	t_list *node = ft_lstnew(&x);
// 	t_list *node2 = ft_lstnew(&x);
// 	t_list *node3 = ft_lstnew(&x);
// 	node->next = node2;
// 	node2->next = node3;
// 	head = node;
// 	node3->next = NULL;
// 	t_list *newnode = ft_lstnew(&y);
// 	ft_lstadd_front(&head, newnode);

// 	t_list *tmp = head;
// 	while (tmp->next != NULL)
// 	{
// 		printf("%d\n", *(int *)tmp->content);
// 		tmp = tmp->next;
// 	}
//}