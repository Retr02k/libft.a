/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 17:42:16 by psilva-p          #+#    #+#             */
/*   Updated: 2025/10/20 20:46:50 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_atoi(const char	*str);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
const char	*ft_strchr(const char	*s, int	c);
size_t	ft_strlcat(char	*dst, const char	*src, size_t	size);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const	char	*str);
int ft_strncmp(const char s1, const char s2, size_t n);
const char	*ft_strrchr(const char	*s, int c);
int	ft_tolower(int	c);
int	ft_toupper(int	c);



#endif