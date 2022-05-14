/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 15:14:57 by anmande           #+#    #+#             */
/*   Updated: 2022/05/14 12:58:52 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*d;

	s = src;
	d = dest;
	if (s)
		ft_memcpy(d, s, n);
	ft_memcpy(dest, d, n);
	return (dest);
}

/*
#include <stdlib.h>
#include <string.h>
int	main()
{
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest = src + 1;
	char *tmp = strdup(dest);
	char *tmp2 = strdup(dest);
	char *i = ft_memmove(tmp, src, 8);
	char *i2 = memmove(tmp2, src, 8);
	printf("ft_ %s\n", i);
	printf("tru %s\n", i2);

	free (tmp);
	free (tmp2);
}
*/