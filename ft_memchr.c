/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 14:08:49 by anmande           #+#    #+#             */
/*   Updated: 2022/05/20 16:12:56 by anmande          ###   ########.fr       */
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
	while (p[i] && i < n)
	{
		if (p[i] == c)
			return (p + i);
		i++;
	}
	if (p[i] == c && c == '\0')
		return (p + i);
	return (NULL);
}

/*
#include <stdio.h>
int main()
{
	const void *s = "bonjourno";
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};

	printf("%s\n", (char *)ft_memchr(tab, -1, 7));
	printf("%s\n", (char *)memchr(s, -1, 7));
}
*/