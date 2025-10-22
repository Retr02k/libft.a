/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:38:29 by psilva-p          #+#    #+#             */
/*   Updated: 2025/10/22 17:28:46 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define SIZE 10
void *ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char) c;
		i++;
	}
	return (s);
}

int main()
{
	char mem[SIZE];
	int ctd = 0;

	while (ctd < SIZE) {
		mem[ctd] = ctd;
		ctd++;
	}
	ctd = 0;
	while (ctd < SIZE) {
		printf("c[%d] = %d\n",ctd, (int)mem[ctd]);
		ctd++;
	}
	ctd = 0;
	ft_memset(mem, 'c',SIZE);
	while (ctd < SIZE) {
		printf("c[%d] = %c\n",ctd, mem[ctd]);
		ctd++;
	}
}