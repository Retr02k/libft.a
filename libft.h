/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 17:42:16 by psilva-p          #+#    #+#             */
/*   Updated: 2025/10/31 14:51:13 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <string.h>

int			ft_atoi(const char	*str);
void		ft_bzero(void	*s, size_t	n);
void		*ft_calloc(size_t	nmemb, size_t	size);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
char		*ft_itoa(int n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memset(void *s, int c, size_t n);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr_fd(char *s, int fd);
char		**ft_split(char const *s, char c);
const char	*ft_strchr(const char	*s, int	c);
char		*ft_strdup(const char	*s);
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		*ft_strjoin(const char	*s1, const char*s2);
size_t		ft_strlcat(char	*dst, const char	*src, size_t	size);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlen(const	char	*str);
char		*ft_strmapi(const char *s, char (*f)(unsigned int, char));
int			ft_strncmp(const char *s1, const char *s2, size_t n);
const char	*ft_strrchr(const char	*s, int c);
char		*ft_strtrim(const char *s1, const char *set);
char		*ft_substr(char const	*s, unsigned int	start, size_t	len);
char		*ft_strnstr(const char	*big, const char	*little, size_t len);
int			ft_tolower(int	c);
int			ft_toupper(int	c);



#endif