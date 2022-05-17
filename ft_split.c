/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:39:15 by anmande           #+#    #+#             */
/*   Updated: 2022/05/17 19:28:18 by anmande          ###   ########.fr       */
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
	splited = ft_calloc(sizeof(char*), nbw);
	ft_lenword(tab, s, c);
	while (i < nbw && s[j])
	{
		while (s[j] == c && s[j])
			j++;
		splited[i] = ft_substr(s, j, tab[i]);
		splited[i][tab[i] - 1] = '\0';
		while (s[j] != c  && s[j])
			j++;
		i++;
	}
	free (tab);
	splited[i] = NULL;
	return (splited);
}

/*
int main()
{
	char	s[] = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.";
	char	c = 'i';
	char **result;
	int i = 0;
	result = ft_split(s, c);
	// printf("yo\n");
	// printf("mdr =%s\n", result[0]);

	while (i < ft_nbword(s, c))
	{
		printf("%s\n", result[i]);
		i++;
	} 
}
*/