/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 15:14:57 by anmande           #+#    #+#             */
/*   Updated: 2022/05/09 14:53:04 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int			i;
	char		*tmp;
	const char	*s;
	char		*d;

	s = src;
	d = dest;
	if (d < s)
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

int main()
{
	char	dest[] = "ofhf";
	char	src[] = "qweyuiopasdkl";
	size_t	size = sizeof (int);
	char *tmp = strdup(dest);
	char *i = ft_memmove(dest, src, 10);
	char *i2 = memmove(tmp, src, 10);
//	ft_memmove(i, src, 5);
//	memmove(i2, src, 5);
	printf("%s\n%s\n", i, i2);
	return (0);
}
