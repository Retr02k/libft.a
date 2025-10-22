/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:52:13 by psilva-p          #+#    #+#             */
/*   Updated: 2025/10/22 19:24:38 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_substr(char const	*s, unsigned int	start, size_t	len)
{
	unsigned int	i;
	size_t			sub_len;
	char			*str;

	i = 0;
	while (i < start)
		i++;
	if (i <= len)
		sub_len = (len - i);
	else
		sub_len = 0;
	printf("Sub_LEN:%zu\n", sub_len);
	str = (char *)ft_calloc(sizeof(char), (sub_len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] && i < sub_len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);	
}

int main()
{
	char	s[] = "hello world!";
	char	*str;
	(void)s;
	str = ft_substr(NULL, 15, 14);
	printf("%s\n", str);
	free(str);
	return (0);
}