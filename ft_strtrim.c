/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:01:50 by anmande           #+#    #+#             */
/*   Updated: 2022/05/16 12:31:01 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/*
static int	ft_cmp(const char s1, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
		if (set[i++] == s1) 
			return (1);
	return (0);
}
*/
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
	//printf("%i %i ft_calloc(%zu, %i)", j, i, sizeof(char), (j - i) + 1);
	cpy = ft_calloc(sizeof(char), (j - i) + 1);
	ft_memcpy(cpy, s1, j - i + 1);
	//cpy = NULL;
	return (cpy);
}


int main()
{
	const char * s1 = "	 		";
	const char *set = " \n\t";
	//ft_strtrim(s1, set);
	char* str = ft_strtrim(s1, set);
	printf("%s\n", str);
	free(str);
}
