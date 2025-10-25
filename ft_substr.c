/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:52:13 by psilva-p          #+#    #+#             */
/*   Updated: 2025/10/25 21:39:12 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const	*s, unsigned int	start, size_t	len)
{
	unsigned int	i;
	size_t			sub_len;
	char			*sub_str;

	i = 0;
	if (!s)
		return (NULL);
	while (i < start)
		i++;
	if (i <= len)
		sub_len = (len - i);
	else
		sub_len = 0;
	sub_str = (char *)ft_calloc((sub_len + 1), sizeof(char));
	if (!sub_str)
		return (NULL);
	i = 0;
	while (s[i] && i < sub_len)
	{
		sub_str[i] = s[start + i];
		i++;
	}
	return (sub_str);	
}

// int main()
// {
// 	char	s[] = "hello world!";
// 	char	*str;
// 	(void)s;
// 	str = ft_substr(NULL, 6, 14);
// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }