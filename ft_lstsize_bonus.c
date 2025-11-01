/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 17:13:06 by moamhouc          #+#    #+#             */
/*   Updated: 2025/11/01 17:58:24 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int count;
    count = 0;
    t_list *tmp = lst;
    if(!lst)
        return (0);
    while (tmp != NULL)
    {
        count++;
        tmp = tmp ->next;
    }
    return (count);
}
int main()
{
    int x = 0;
    t_list *head;
    t_list *node = ft_lstnew(&x);
    t_list *node2 = ft_lstnew(&x);
    t_list *node3 = ft_lstnew(&x);
    node->next = node2;
    node2 -> next = node3;
    node3 ->next = NULL;
    head = node;
    printf("%d", ft_lstsize(head));
}