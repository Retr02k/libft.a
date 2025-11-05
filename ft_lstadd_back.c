/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 09:39:26 by psilva-p          #+#    #+#             */
/*   Updated: 2025/11/04 23:34:34 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next)
		last = last->next;
	last->next = new;
}

// int main()
// {
// 	t_list *list = NULL;
// 	t_list *node1 = ft_lstnew("First");
// 	t_list *node2 = ft_lstnew("Last");

// 	ft_lstadd_back(&list, node1);
// 	ft_lstadd_back(&list, node2);

// 	printf("First: %s\n", (char *)list->content);
// 	printf("last: %s\n", (char *)list->next->content);

// 	free(node1);
// 	free(node2);
// 	return 0;
// }
