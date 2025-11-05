/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:09:45 by psilva-p          #+#    #+#             */
/*   Updated: 2025/11/05 16:00:51 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	size;
	char	*str;

	if (!s || !f)
		return (NULL);
	i = 0;
	size = ft_strlen(s);
	str = (char *)ft_calloc(size + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}

// char my_toupper(unsigned int i, char c)
// {
// 	(void)i;
// 	return (char)ft_toupper(c);
// }
// int main()
// {
// 	char *result1 = ft_strmapi("hello", my_toupper);
// 	printf("Original: hello\n");
// 	printf("Result: %s (expected: HELLO\n)", result1);
// 	free(result1);

// 	return 0;
// }
