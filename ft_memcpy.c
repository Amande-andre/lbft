/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 15:12:20 by anmande           #+#    #+#             */
/*   Updated: 2022/05/09 16:23:42 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	int			i;
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	i = 0;
	while (i < n && s[i])
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int	main()
{
	char	dest[] = "qwertyuiop";
	char	src[] = "0123456789";
	size_t	size = sizeof (int);
	char *tmp = strdup(dest);
	char *tmp2 = strdup(dest);
	char *i = ft_memcpy(tmp, src, 5);
	char *i2 = memcpy(tmp2, src, 5);
	printf("%s\n%s\n", i, i2);
	free (tmp);
	free (tmp2);
}