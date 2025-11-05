/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 09:28:53 by psilva-p          #+#    #+#             */
/*   Updated: 2025/11/04 23:30:16 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (!lst)
		return (NULL);
	temp = lst;
	while (temp->next)
		temp = temp->next;
	return (temp);
}

// int main()
// {
// 	t_list *node1 = ft_lstnew("First");
// 	t_list *node2 = ft_lstnew("Last");
// 	node1->next =node2;

// 	t_list *last = ft_lstlast(node1);

// 	printf("Last content: %s (expected: Last)\n", (char *)last->content);

// 	free(node1);
// 	free(node2);
// 	return 0;
// }
