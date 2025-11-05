/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 21:03:55 by psilva-p          #+#    #+#             */
/*   Updated: 2025/11/04 23:24:13 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list	**lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int main()
// {
// 	t_list *list = NULL;
// 	t_list *node1 = ft_lstnew("First");
// 	t_list *node2 = ft_lstnew("Last");
// 	node1->next = node2;

// 	ft_lstadd_front(&list, node1);
// 	ft_lstadd_front(&list, node2);

// 	printf("First: %s (expected: second)\n", (char *)list->content);
// 	printf("second: %s (expected: First)\n", (char *)list->next->content);

// 	free(node1);
// 	free(node2);
// 	return 0;
// }
