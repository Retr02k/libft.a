/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:48:16 by psilva-p          #+#    #+#             */
/*   Updated: 2025/11/05 17:23:59 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
}

// void delete_int(void *content)
// {
// 	free(content);
// }

// int main()
// {
// 	int *a = malloc(sizeof(int)); *a = 1;
// 	int *b = malloc(sizeof(int)); *b = 2;
// 	int *c = malloc(sizeof(int)); *c = 3;

// 	t_list *list = ft_lstnew(a);
// 	ft_lstadd_back(&list, ft_lstnew(b));
// 	ft_lstadd_front(&list, ft_lstnew(c));

// 	printf("Before clear: list exists\n");
// 	ft_lstclear(&list, delete_int);
// 	printf("after clear: list = %p\n", (void *)list);

// 	return 0;
// }