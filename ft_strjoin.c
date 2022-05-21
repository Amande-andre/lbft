/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:37:58 by anmande           #+#    #+#             */
/*   Updated: 2022/05/21 11:26:05 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	lens1;
	size_t	lens2;

	if (!s1)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (lens1 + lens2) + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, lens1);
	ft_memcpy(str + lens1, s2, lens2);
	return (str);
}

/*
#include <stdio.h>
int main()
{
	printf("%s\n", ft_strjoin("ceci", "est un test"));
}
*/