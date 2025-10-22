/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:40:36 by psilva-p          #+#    #+#             */
/*   Updated: 2025/10/22 17:27:14 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#define SIZE 10
void	ft_bzero(void	*s, size_t	n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char	*)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

// int main()
// {
// 	char mem[SIZE];
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
// 	ft_bzero(mem, SIZE);
// 	while (ctd < SIZE) {
// 		printf("c[%d] = %d\n",ctd, (int)mem[ctd]);
// 		ctd++;
// 	}
// }