/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 21:49:11 by psilva-p          #+#    #+#             */
/*   Updated: 2025/10/28 18:47:02 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	int_count(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n *= -1;
		while (n > 0)
		{
			n /= 10;
			count++;
		}
		return (count);
	}
	else if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*handle_zero(void)
{
	char	*str;

	str = (char *)ft_calloc(2, sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

static	void	fill_string(char *str, int n, int i)
{
	while (n > 0)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
}

char	*ft_itoa(int n)
{
	int		size;
	char	*str;
	int		is_negative;

	if (n == 0)
		return (handle_zero());
	is_negative = (n < 0);
	size = int_count(n) + is_negative + 1;
	str = (char *)ft_calloc(size, sizeof(char));
	if (!str)
		return (NULL);
	if (is_negative)
	{
		str[0] = '-';
		n *= -1;
	}
	fill_string(str, n, size - 2);
	return (str);
}
/* 
int main()
{
	char	*n = ft_itoa(123);
	char	*n2 = ft_itoa(7);
	char	*n3 = ft_itoa(-123984);
	
	printf("%s\n", n);
	printf("%s\n", n2);
	printf("%s\n", n3);

	free(n);
	free(n2);
	free(n3);
}
*/