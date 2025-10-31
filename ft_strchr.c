/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 19:53:46 by psilva-p          #+#    #+#             */
/*   Updated: 2025/10/31 15:47:08 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char) c)
			return (s);
		s++;
	}
	return (0);
}

// int main()
// {
// 	char	str[] = "hello world!";
// 	int		i = 't';

// 	printf("%s\n", ft_strchr(str, i));
// }