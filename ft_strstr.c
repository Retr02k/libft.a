/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:16:52 by psilva-p          #+#    #+#             */
/*   Updated: 2025/10/21 14:28:12 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

const char	*ft_strstr(const char	*haystack, const char	*needle)
{
	while (*haystack)
	{
		if (*haystack == *needle)
			return (needle);
		haystack++;
	}
	return (0);
}

int main()
{
	char haystack[] = "hello world, how are you?";
	char needle[] = "how";

	char haystack2[] = "hello world, how are you?";
	char needle2[] = "how";

	printf("mine: %s\n", ft_strstr(haystack, needle));
	printf("original: %s\n", strstr(haystack2, needle2));
}