/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:08:42 by psilva-p          #+#    #+#             */
/*   Updated: 2025/10/22 16:25:29 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "limits.h"

void	*ft_calloc(size_t	nmemb, size_t	size)
{
	void *mem;
	
	mem = malloc(nmemb * size);
	if (!mem)
		return (NULL);
	if (size && nmemb > __SIZE_MAX__ / size)
		return (NULL);
	
}