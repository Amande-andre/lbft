/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:39:15 by anmande           #+#    #+#             */
/*   Updated: 2022/05/20 16:03:50 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbword(const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			while (s[i] != c && s[i])
				i++;
			j++;
		}
		while (s[i] == c && s[i])
			i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**splited;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	splited = malloc(sizeof(char *) * (ft_nbword(s, c) + 1));
	if (!(splited))
		return (NULL);
	while (i < ft_nbword(s, c))
	{
		while (s[j] && s[j] == c )
			j++;
		while (s[j] != c && s[j])
		{
			j++;
			k++;
		}	
		splited[i++] = ft_substr(s, j - k, k);
		k = 0;
	}
	splited[i] = NULL;
	return (splited);
}

/*
#include <stdio.h>

int main()
{
	char	s[] = "ula massa, varius a, semper congue, euismod non, mi.";
	char	c = ' ';
	char **result;
	int i = 0;
	result = ft_split(s, c);
	// printf("yo\n");
	// printf("mdr =%s\n", result[0]);

	while (i < ft_nbword(s, c))
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
}
*/