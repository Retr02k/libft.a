/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:26:27 by psilva-p          #+#    #+#             */
/*   Updated: 2025/11/05 18:07:48 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// void delete_int(void *content)
// {
// 	free(content);
// }

// int main()
// {
// 	int	*a = malloc(sizeof(int)); *a = 1;
// 	int	*b = malloc(sizeof(int)); *b = 2;
// 	int	*c = malloc(sizeof(int)); *c = 3;

// 	t_list *list = ft_lstnew(a);
// 	ft_lstadd_back(&list, ft_lstnew(b));
// 	ft_lstadd_front(&list, ft_lstnew(c));

// 	printf("Before delete:\n");
// 	t_list *temp = list;
// 	while (temp)
// 	{
// 		printf("Node content: %d\n", *(int *)temp->content);
// 		temp = temp->next;
// 	}

// 	printf("Deleting first node with content: %d\n", *(int *)list->content);

// 	t_list *next_node = list->next;
// 	ft_lstdelone(list, delete_int);

// 	printf("After delete - remaining nodes:\n");
// 	temp = next_node;
// 	while (temp)
// 	{
// 		printf("Node content: %d\n", *(int *)temp->content);
// 		temp = temp->next;
// 	}

// 	ft_lstclear(&next_node, delete_int);

// 	return 0;
// }