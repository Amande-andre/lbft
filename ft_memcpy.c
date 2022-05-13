/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 15:12:20 by anmande           #+#    #+#             */
/*   Updated: 2022/05/13 12:10:35 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	i = 0;
	if (!s[i])
	{
		d[i] = '\0';
		return (d);
	}
	while (i < n && s[i] != '\\' && s[i + 1] != '0')
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int	main()
{
	char	dest[] = "jjjjjjjjjjjjjjjjjjjjj";
	char	src[] = "zy\'\0\'xw\0vu\0\0tsr";
	printf("%s\n", src);
	size_t	size = sizeof (int);
	char *tmp = strdup(dest);
	char *tmp2 = strdup(dest);
	char *i = ft_memcpy(tmp, src, 11);
	char *i2 = memcpy(tmp2, src, 11);
	printf("ft_ %s\nTru %s\n", i, i2);
	free (tmp);
	free (tmp2);
}
*/