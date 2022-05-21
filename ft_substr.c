/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:36:03 by anmande           #+#    #+#             */
/*   Updated: 2022/05/21 11:14:45 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
		return (NULL);
	if (len > (unsigned int)ft_strlen(s) - start)
		str = (char *)malloc(sizeof(char) * ft_strlen(s) - start + 1);
	else
		str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (s[start] && i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = 0;
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	char *str = strdup("0123456789");
// 	char *s = ft_substr(str, 0, 15);
// 	printf("%s\n", s);
// 	if (s)
// 		free (s);
// 	if (str)
// 		free (str);
// 	return (0);
// }