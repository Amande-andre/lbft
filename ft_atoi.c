/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:22:13 by anmande           #+#    #+#             */
/*   Updated: 2022/05/12 15:55:43 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int			i;
	long int	n;
	int			sign;

	i = 0;
	n = 0;
	sign = 1;
	while (nptr[i])
	{
		while (nptr[i] == ' ')
			i++;
		if (nptr[i] == '-' || nptr[i] == '+')
		{
			if (nptr[i] == '-')
				sign = -1;
			i++;
		}
		if (!(ft_isdigit(nptr[i])))
			return (n);
		n = n * 10 + nptr[i] - '0';
		i++;
	}
	return (n * sign);
}

/*
#include <stdlib.h>
#include <stdio.h>
int main()
{
	printf("%d\n", ft_atoi("546:5"));
	printf("%d\n", atoi("546:5"));
}
*/