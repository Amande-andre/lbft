/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 14:08:49 by anmande           #+#    #+#             */
/*   Updated: 2022/05/11 14:56:50 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (void *)s;
	while (p[i] && i < n)
	{
		if (p[i] == c)
			return (p);
		p++;
	}
	i++;
	if (p[i] == c)
	{
		p++;
		return (p);
	}
	return (p);
}
