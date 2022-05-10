/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:20:54 by anmande           #+#    #+#             */
/*   Updated: 2022/05/10 18:16:06 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)s);
		s++;
	}
	i++;
	if (s[i] == c)
	{
		s++;
		return ((char *)s);
	}
	return ((char *)s);
}

/*
#include <string.h>
#include <stdio.h>
int main()
{
	char s[] = "bonjour";
	int c = 's';
	printf("%s\n", ft_strchr(s, c));
}
*/