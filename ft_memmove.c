/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 15:14:57 by anmande           #+#    #+#             */
/*   Updated: 2022/05/10 12:48:49 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		while (i < n)
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

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int	main()
{
	char	dest[] = "jjjjjjjjjjjjjjjjjjjjj";
	char	src[] = "zy\0xw\0vu\0\0tsr";
	printf("%s\n", src);
	size_t	size = sizeof (int);
	char *tmp = strdup(dest);
	char *tmp2 = strdup(dest);
	char *i = ft_memmove(tmp, src, 11);
	char *i2 = memmove(tmp2, src, 11);
	printf("ft_ %s\nTru %s\n", i, i2);
	free (tmp);
	free (tmp2);
}
