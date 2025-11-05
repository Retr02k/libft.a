/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:34:10 by psilva-p          #+#    #+#             */
/*   Updated: 2025/11/05 18:08:13 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	if (!lst || !f)
		return ;
	temp = lst;
	while (temp)
	{
		f(temp->content);
		temp = temp->next;
	}
}

// void delete_int(void *content)
// {
// 	free(content);
// }

// void print_int(void *content)
// {
// 	printf("Value: %d\n", *(int *)content);
// }

// void double_int(void *content)
// {
// 	*(int *)content *= 2;
// }

// int main()
// {
// 	t_list *head = NULL;
// 	int *values[4];

// 	for (int i = 0; i < 4; i++)
// 	{
// 		values[i] = malloc(sizeof(int));
// 		*values[i] = (i + 1) * 10;
// 	}

// 	head = ft_lstnew(values[0]);
// 	ft_lstadd_back(&head, ft_lstnew(values[1]));
// 	ft_lstadd_back(&head, ft_lstnew(values[2]));
// 	ft_lstadd_back(&head, ft_lstnew(values[3]));

// 	printf("Original list:\n");
// 	ft_lstiter(head, print_int);

// 	printf("\nDoubling all values:\n");
// 	ft_lstiter(head, double_int);
// 	ft_lstiter(head, print_int);

// 	printf("\nFreeing memory:\n");
// 	ft_lstiter(head, delete_int);
// 	ft_lstclear(&head, NULL);

// 	return 0;
// }
