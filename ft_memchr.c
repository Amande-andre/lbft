/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 14:08:49 by anmande           #+#    #+#             */
/*   Updated: 2022/05/25 16:02:55 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (void *)s;
	c = (unsigned char)c;
	if (c > 256)
		c %= 256;
	if (n == 0)
		return (NULL);
	while (p[i] && i < n)
	{
		if (p[i] == c)
			return ((void *)p + i);
		i++;
	}
	return (NULL);
}
