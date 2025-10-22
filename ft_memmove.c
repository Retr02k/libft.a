/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 19:04:58 by psilva-p          #+#    #+#             */
/*   Updated: 2025/10/22 17:26:57 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define SIZE 10

void	*ft_memmove(void	*dest, const void	*src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
		return(NULL);
	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (d > s)
	{
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

// int main()
// {
// 	char mem[SIZE];
// 	char mem2[SIZE];
// 	printf("mem = %p\n", &mem);
// 	printf("mem2 = %p\n", &mem2);
// 	int ctd = 0;

// 	while (ctd < SIZE) {
// 		mem[ctd] = ctd;
// 		ctd++;
// 	}
// 	ctd = 0;
// 	while (ctd < SIZE) {
// 		printf("c[%d] = %d\n",ctd, (int)mem[ctd]);
// 		ctd++;
// 	}
// 	ctd = 0;
// 	ft_memmove(mem2, mem, SIZE);
// 	while (ctd < SIZE) {
// 		printf("c[%d] = %d\n",ctd, (int)mem2[ctd]);
// 		ctd++;
// 	}
// }