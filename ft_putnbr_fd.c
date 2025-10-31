/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:20:16 by psilva-p          #+#    #+#             */
/*   Updated: 2025/10/31 14:49:08 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	digit;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	digit = (n % 10) + '0';
	write(fd, &digit, 1);
}

// int main()
// {
//     ft_putnbr_fd(45678, 1);
//     write(1, "\n", 1);
//     ft_putnbr_fd(-45678, 1);
//     write(1, "\n", 1);
//     ft_putnbr_fd(0, 1);
//     write(1, "\n", 1);
//     ft_putnbr_fd(-2147483648, 1);
//     write(1, "\n", 1);
//     return 0;
// }