/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:00:28 by anmande           #+#    #+#             */
/*   Updated: 2022/05/06 14:52:25 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "libft.h"

int     main()
{
        ft_isalpha("test");
        printf("%d", ft_isalpha("Ceci est un test "));
        printf("%d\n", ft_isalpha("Ceci est un test "));
		printf("%d", ft_isalpha(""));
        printf("%d\n", ft_isalpha(""));
		printf("%d", ft_isalpha("25"));
        printf("%d\n", ft_isalpha("25"));
        printf("\n");
		//------------>ft_isdigit<..............//
		printf("%d", ft_isdigit('0'));
        printf("%d\n", isdigit('0'));
        printf("%d", ft_isdigit('1'));
        printf("%d\n", isdigit('1'));
		printf("%d", ft_isdigit('2'));
        printf("%d\n", isdigit('2'));
		printf("%d\n", ft_isdigit('3'));
        printf("%d\n", isdigit('3'));
		printf("%d", ft_isdigit('4'));
        printf("%d\n", isdigit('4'));
        printf("%d", ft_isdigit('5'));
        printf("%d\n", isdigit('5'));
		printf("%d", ft_isdigit('6'));
        printf("%d\n", isdigit('6'));
		printf("%d\n", ft_isdigit('7'));
        printf("%d\n", isdigit('7'));
        printf("%d", ft_isdigit('8'));
        printf("%d\n", isdigit('8'));
		printf("%d", ft_isdigit('9'));
        printf("%d\n", isdigit('9'));
		printf("%d\n", ft_isdigit('q'));
        printf("%d\n", isdigit('q'));
        return (0);
}