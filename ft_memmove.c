/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 15:14:57 by anmande           #+#    #+#             */
/*   Updated: 2022/05/10 16:52:57 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*s;
	char		*d;

	s = src;
	d = dest;
	if (s < d)
	{
		i = 0;
		while (i < n && s[i] != '\\' && s[i + 1] != '0')
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i-- > 0)
			d[i] = s[i];
	}
	return (dest);
}

/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int	main()
{
	char	dest[] = "";
	char	src[] = "lorem ipsum dolor sit amet";
	printf("%s\n", src);
	size_t	size = sizeof(int) * 1;
	char *tmp = strdup(dest);
	char *tmp2 = strdup(dest);
	char *i = ft_memmove(tmp, src, 8);
	char *i2 = memmove(src, tmp2, 8);
	printf("ft_ %s\nTru %s\n", i, i2);
	free (tmp);
	free (tmp2);
}
*/