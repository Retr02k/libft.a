/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:41:33 by psilva-p          #+#    #+#             */
/*   Updated: 2025/10/31 15:52:28 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	lens[3];

	if (!s1 || !s2)
		return (NULL);
	lens[0] = ft_strlen(s1);
	lens[1] = ft_strlen(s2);
	lens[2] = lens[0] + lens[1];
	str = (char *)ft_calloc(lens[2] + 1, sizeof(char));
	if (!str)
		return (NULL);
	ft_memcpy(str, (void *)s1, lens[0]);
	return ((void)ft_memcpy(str + lens[0], (void *)s2, lens[1]), str);
}

// int main()
// {
// 	const char	s1[] = "Hello ";
// 	const char	s2[] = "World!";

// 	char	*str = ft_strjoin(s1, s2);
// 	printf("%s\n", str);
// 	free(str);
// }