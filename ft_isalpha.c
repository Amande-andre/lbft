/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 08:10:49 by anmande           #+#    #+#             */
/*   Updated: 2022/05/06 11:58:12 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i]  <= 'z')))
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include "libft.h"
int	main()
{
	ft_isalpha("test");
	printf("%d\n", ft_isalpha("Ceci est un test"));
	printf("%d\n", ft_isalpha("Ceci est un test"));
	return (0);
}
*/