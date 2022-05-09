/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 15:14:57 by anmande           #+#    #+#             */
/*   Updated: 2022/05/09 16:01:57 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{

	int			i;
	char		*tmp;
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
