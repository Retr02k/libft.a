/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 17:41:23 by psilva-p          #+#    #+#             */
/*   Updated: 2025/09/14 18:50:09 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalnum(char c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

int main()
{
	printf("%i\n", ft_isalnum('a'));
	printf("%i\n", ft_isalnum('A'));
	printf("%i\n", ft_isalnum('1'));
	printf("%i\n", ft_isalnum('\n'));
	printf("%i\n", ft_isalnum('V'));
}