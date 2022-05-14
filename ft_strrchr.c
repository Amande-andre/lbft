/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 18:09:59 by anmande           #+#    #+#             */
/*   Updated: 2022/05/14 12:21:15 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (s[i] == c)
		return ((char *)s + i);
	while (i-- >= 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
	}
	return (NULL);
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