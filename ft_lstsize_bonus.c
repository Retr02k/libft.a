/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 09:18:02 by psilva-p          #+#    #+#             */
/*   Updated: 2025/11/04 23:17:01 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*temp_lst;

	if (!lst)
		return (0);
	counter = 0;
	temp_lst = lst;
	while (temp_lst)
	{
		temp_lst = temp_lst->next;
		counter++;
	}
	return (counter);
}

// int main()
// {
// 	t_list	*node1 = ft_lstnew("First");
// 	t_list	*node2 = ft_lstnew("Last");

// 	node1->next = node2;

// 	printf("Size: %d (expected: 2)\n", ft_lstsize(node1));
// 	printf("Size of NULL: %d (expected: 0)\n", ft_lstsize(NULL));

// 	free(node1);
// 	free(node2);
// 	return 0;
// }
