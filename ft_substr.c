/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:36:03 by anmande           #+#    #+#             */
/*   Updated: 2022/05/17 19:28:14 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	
	i = 0;
	if (!s || len <= 0)
		return (ft_strdup(""));
	if (start > (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	str = (char*)ft_calloc(sizeof(char) + 1, len);
	if (!str) 
		return (NULL);
	while (s[start] && i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}


// #include <stdio.h>
// int main()
// {
// 	char *str = strdup("0123456789");
// 	char *s = ft_substr("42", 0, 0);
// 	printf("\n%s\n\n", s);
// 	if (s)
// 		free (s);
// 	if (str)
// 		free (str);
// 	return (0);
// }
