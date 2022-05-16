/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 15:05:16 by anmande           #+#    #+#             */
/*   Updated: 2022/05/16 11:11:23 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**splited;
	int		len;

	i = 0;
	j = 0;
	len = ft_strlen(s);
	s = (char *)s;
	while (s[i++])
	{
		if (s[i] == c)
		{
			ft_memcpy(splited[j++], ft_substr(s, 0, i), i);
		}
	}
	printf("%s\n", splited[0]);
	printf("%s\n", splited[1]);
	printf("%s\n", splited[2]);
	printf("%s\n", splited[3]);
	printf("%s\n", splited[4]);
}

#include <stdio.h>
int main()
{
	char	*s = "012a456a891abcdaefghij";
	char	c = "a";
	int		i = 0;
	ft_split(s, c);
}