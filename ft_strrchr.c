/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:21:55 by psilva-p          #+#    #+#             */
/*   Updated: 2025/10/20 20:46:34 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

const char	*ft_strrchr(const char	*s, int c)
{
	const char	*str;
	int		length;

	length = ft_strlen(s);
	str = s + length;
	while (str >= s)
	{
		if (*str == c)
			return (str);
		str--;
	}
	return (0);
}

// int main()
// {
// 	char	str[] = "hello world!";
// 	int		i = 'h';

// 	printf("%s\n", ft_strrchr(str, i));
// }