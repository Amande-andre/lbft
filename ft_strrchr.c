/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 18:09:59 by anmande           #+#    #+#             */
/*   Updated: 2022/05/10 18:43:40 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	if (s[i + 1] == c)
	{
		s = s + i + 1;
		return ((char *)s);
	}
	while (i >= 0)
	{
		if (s[i] == c)
		{
			s = s + i;
			return ((char *)s);
		}	
		i--;
	}
	return ((void *)s);
}

/*
#include <string.h>
#include <stdio.h>
int main()
{
	const char s[] = "bonjour";
	int c = 'o';
	printf("%s\n", ft_strrchr(s, c));
}
*/