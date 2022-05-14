/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:01:50 by anmande           #+#    #+#             */
/*   Updated: 2022/05/14 18:49:52 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_cmp(const char s1, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] != s1)
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*cpy;

	i = 0;
	j = ft_strlen(s1);
	while (!(ft_cmp(s1[i], set) == 0))
	{
		printf("%d\n%d\n", i, j);
		i++;
	}
	printf("%d\n%d\n", i, j);	
	while (ft_cmp(s1[j], set))
		j--;
	printf("%d\n%d\n", i, j);
	s1 = (char *)s1;
	printf("%d\n%d\n", i, j);
	cpy = calloc(sizeof(char), (j - i) + 1);
	ft_memcpy(cpy, s1 + i, j - i + 1);
	return(cpy);
}

int main()
{
	char * s1 = "aaaaabbcbaacbcbacbcsko;hfo;ihfbcbabcab";
	char *set = "abc";
	printf("%s\n", ft_strtrim(s1, set));
}