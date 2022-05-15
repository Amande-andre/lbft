/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:01:50 by anmande           #+#    #+#             */
/*   Updated: 2022/05/15 12:25:55 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_cmp(const char s1, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == s1) 
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*cpy;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (ft_cmp(s1[i], set) == 1 && s1[i])
		i++;
	while (ft_cmp(s1[j], set) == 1)
		j--;
	//while (ft_cmp(s1[j], set) == 1)
	//	j--;
	s1 = (char *)s1 + i;
	cpy = calloc(sizeof(char), (j - i) + 1);
	ft_memcpy(cpy, s1, j - i + 1);
	return (cpy);
}


int main()
{
	const char * s1 = "			";
	const char *set = "\t \n";
	printf("%s\n", ft_strtrim(s1, set));
}
