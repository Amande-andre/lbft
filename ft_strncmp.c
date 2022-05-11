/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 18:44:40 by anmande           #+#    #+#             */
/*   Updated: 2022/05/11 12:50:42 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	if (str1[i] == '\0' || str2[i] == '\0')
		return (str1[i] - str2[i]);
	while (str1[i] && str2[i] && i < n)
	{
		if (str1[i + 1] == '\0' || str2[i + 1] == '\0')
			return (str1[i + 1] - str2[i + 1]);
		if (str1[i] != s2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char s1[] = "test\200";
	char s2[] = "test\0";
	printf("%d\n", ft_strncmp(s1, s2, 6));
	printf("%d\n", strncmp(s1, s2, 6));
}
*/