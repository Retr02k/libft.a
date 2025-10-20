/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:58:08 by psilva-p          #+#    #+#             */
/*   Updated: 2025/10/20 19:46:42 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char	*dst, const char	*src, size_t	size)
{
	size_t	dst_len;
	size_t	src_len;
	int	i = 0;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	while (*dst)
		dst++;
 	if (size <= dst_len)
 		return (size + src_len);
	while (src[i] && dst_len + i + 1 < size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
int main()
{
	char s1[20] = "world";
	char s2[] = "hello";

	char s3[20] = "world";
	char s4[] = "hello";
	int size = 10;

	printf("mine: %li\n", ft_strlcat(s1, s2, size));
	printf("mineSTR: %s\n", s1);
	printf("original: %li\n", strlcat(s3, s4, size));
	printf("originalSTR: %s\n", s3);
}
*/