#include "libft.h"

int	main(void)
{
	int x = 0;
	t_list *head = NULL;
	t_list *node = ft_lstnew(&x);
	t_list *node2 = ft_lstnew(&x);
	node->next = node2;
	node2->next = NULL;
	head = node;
	t_list *new = ft_lstnew(&x);
	ft_lstadd_back(&head, new);
}