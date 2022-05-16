/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:01:50 by anmande           #+#    #+#             */
/*   Updated: 2022/05/16 12:45:52 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*cpy;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]) && s1[i])
		i++;
	while (ft_strchr(set, s1[j]) && j > i)
		j--;
	s1 = (char *)s1 + i;
	cpy = ft_calloc(sizeof(char), (j - i) + 1);
	ft_memcpy(cpy, s1, j - i + 1);
	return (cpy);
}

/*
int main()
{
	const char * s1 = "\t\n32 ";
	const char *set = "\n \t";
	//ft_strtrim(s1, set);
	char* str = ft_strtrim(s1, set);
	printf("%s\n", str);
	free(str);
}
*/