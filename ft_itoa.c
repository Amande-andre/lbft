/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:14:10 by anmande           #+#    #+#             */
/*   Updated: 2022/05/24 12:23:50 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_putnbr(long int n, size_t size)
{
	size_t	nb;
	int		i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char ) * size + 1);
	if (!str)
		return (NULL);
	if (n < 0)
		nb = n * -1;
	else
		nb = n;
	while (nb >= 10)
	{
		str[size] = nb % 10 + '0';
		nb = nb / 10;
		size--;
	}
	str[size] = nb + '0';
	if (n < 0 && nb < 10)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*a;
	size_t	i;
	size_t	nb;

	i = 0;
	n = (long int)n;
	if (n == -2147483648)
		return (a = "-2147483648");
	if (n < 0)
	{
		nb = n * -1;
		i++;
	}
	else
		nb = n;
	while (nb >= 10)
	{
		nb = nb / 10;
		i++;
	}
	a = (ft_putnbr(n, i));
	if (!a)
		return (NULL);
	return (a);
}

// #include <stdio.h>
// int main(int ac, char **av)
// {
// 	(void)ac;
// 	int	n = ft_atoi(av[1]);
// 	printf("%s\n", ft_itoa(n));
// }