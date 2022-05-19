/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:39:15 by anmande           #+#    #+#             */
/*   Updated: 2022/05/19 10:58:44 by anmande          ###   ########.fr       */
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
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			while (s[i] != c && s[i])
				i++;
			j++;
		}
	}
	return (j);
}

static void	ft_lenword(int *tab, const char *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{			
			while (s[i] != c && s[i])
			{
				k++;
				i++;
			}
			tab[j] = k;
			j++;
			k = 1;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**splited;
	int		i;
	int		j;
	int		nbw;
	int		*tab;

	i = 0;
	j = 0;
	nbw = ft_nbword(s, c);
	tab = ft_calloc(sizeof(int), nbw);
	splited = ft_calloc(sizeof(char *), nbw);
	ft_lenword(tab, s, c);
	while (i < nbw && s[j])
	{
		while (s[j] == c && s[j])
			j++;
		splited[i] = ft_substr(s, j, tab[i]);
		splited[i][tab[i]] = '\0';
		while (s[j] != c && s[j])
			j++;
		i++;
	}
	free (tab);
	splited[i] = NULL;
	return (splited);
}

// #include <stdio.h>

// int main()
// {
// 	char	s[] = "ula massa, varius a, semper congue, euismod non, mi.";
// 	char	c = ' ';
// 	char **result;
// 	int i = 0;
// 	result = ft_split(s, c);
// 	// printf("yo\n");
// 	// printf("mdr =%s\n", result[0]);

// 	while (i < ft_nbword(s, c))
// 	{
// 		printf("%s\n", result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// }
