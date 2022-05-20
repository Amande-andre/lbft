/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 10:51:09 by anmande           #+#    #+#             */
/*   Updated: 2022/05/20 13:39:11 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*cpy;

	cpy = (char *)malloc((ft_strlen(s) + 1));
	if (cpy)
		ft_memcpy(cpy, s, (ft_strlen(s) + 1));
	return (cpy);
}

/*
#include <stdio.h>
int main()
{
	char	*str = "ceci est un test";
	char	*ret = ft_strdup(str);
	printf("%lu", sizeof(char));
	free(ret);
}
*/