/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 10:14:47 by moamhouc          #+#    #+#             */
/*   Updated: 2025/11/06 15:57:24 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
		lst = lst->next;
	return (lst);
}
// int	main()
// {
// 	int x = 9;
// 	int n = 8;
// 	int j = 0;
// 	int s = 3;
// 	t_list *head = NULL;
// 	t_list *node = ft_lstnew(&s);
// 	t_list *node1 = ft_lstnew(&j);
// 	t_list *node2 = ft_lstnew(&x);
// 	t_list *node3 = ft_lstnew(&n);
// 	node->next = node1;
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;
// 	head = node;
// 	printf("%d", *(int *)ft_lstlast(head)->content);
// }