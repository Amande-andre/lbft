/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:39:15 by anmande           #+#    #+#             */
/*   Updated: 2022/05/16 18:40:32 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
	return (j + 1);
}

static void	ft_lenword(int *tab, const char *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		k = 1;
		if (s[i] != c && s[i])
		{
			while (s[i] != c && s[i])
			{
				k++;
				i++;
			}
			tab[j] = k;
			j++;
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
	splited = ft_calloc(sizeof(char), nbw);
	ft_lenword(tab, s, c);
	while (i < nbw - 1)
	{
		while (s[j] == c && s[j])
			j++;
		splited[i] = ft_substr(s, j, tab[i] - 1);
		splited[tab[i] - 1] = 0;
		i++;
		while (s[j] != c  && s[j])
			j++;
	}
	splited[i] = NULL;
	free (tab);
	return (splited);
}

/*
int main()
{
	char	s[] = "123a456a789a";
	char	c = 'a';
	char **result;
	int i = 0;
	result = ft_split(s, c);
	while (i < ft_nbword(s, c) - 1)
	{
		printf("%s\n", result[i]);
		i++;
	} 
}
*/