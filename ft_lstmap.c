/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:29:06 by psilva-p          #+#    #+#             */
/*   Updated: 2025/11/05 16:30:04 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*node;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, node);
		lst = lst->next;
	}
	return (new_list);
}

// void *double_int(void *content)
// {
// 	int *new_num = malloc(sizeof(int));
// 	if (!new_num)
// 		return (NULL);
// 	*new_num = (*(int *)content) * 2;
// 	return (new_num);
// }

// void delete_int(void *content)
// {
// 	free(content);
// }

// int main()
// {
// 	int *a = malloc(sizeof(int)); *a = 1;
// 	int *b = malloc(sizeof(int)); *b = 2;
// 	int *c = malloc(sizeof(int)); *c = 3;

// 	t_list *node1 = ft_lstnew(a);
// 	t_list *node2 = ft_lstnew(b);
// 	t_list *node3 = ft_lstnew(c);

// 	node1->next = node2;
// 	node2->next = node3;

// 	printf("Original: %d -> %d -> %d\n", *a, *b, *c);

// 	t_list *doubled = ft_lstmap(node1, double_int, delete_int);

// 	printf("Doubled:  ");
// 	t_list *current = doubled;
// 	while (current)
// 	{
// 		printf("%d", *(int *)current->content);
// 		if (current->next)
// 			printf(" -> ");
// 		current = current->next;
// 	}
// 	printf("\n");

// 	ft_lstclear(&node1, delete_int);
// 	ft_lstclear(&doubled, delete_int);

// 	return (0);
// }
