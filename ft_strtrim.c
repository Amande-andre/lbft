/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:01:50 by anmande           #+#    #+#             */
/*   Updated: 2022/05/24 17:08:12 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*cpy;

	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[j]) && j > i)
		j--;
	s1 = (char *)s1 + i;
	cpy = ft_calloc(sizeof(char *), (j - i) + 1);
	ft_memcpy(cpy, s1, (j - i) + 1);
	return (cpy);
}

// #include <stdio.h>
// int main()
// {
// 	const char * s1 = "tripouille   xxx";
// 	const char *set = " x";
// 	//ft_strtrim(s1, set);
// 	char* str = ft_strtrim(s1, set);
// 	printf("%s\n", str);
// 	free(str);
// }
