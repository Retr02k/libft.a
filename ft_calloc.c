/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:08:42 by psilva-p          #+#    #+#             */
/*   Updated: 2025/11/04 20:00:55 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t	nmemb, size_t	size)
{
	size_t	total;
	void	*mem;

	if (nmemb && size && nmemb > SIZE_MAX / size)
		return (NULL);
	total = nmemb * size;
	mem = malloc(total);
	if (!mem)
		return (NULL);
	ft_bzero(mem, total);
	return (mem);
}

// int main()
// {
// 	size_t	n = 5;
// 	//size_t	i = 0;
// 	int *arr = ft_calloc(n, 0);

// 	if (arr == NULL)
// 	{
// 		printf("Memory allocation failed\n");
// 		return (1);
// 	}
// 	// i = 0;
// 	// while (i < n)
// 	// {
// 	// 	printf("arr[%lu] = %d\n", i, arr[i]);
// 	// 	i++;
// 	// }
// 	// free(arr);
// 	return (0);
// }