/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:00:28 by anmande           #+#    #+#             */
/*   Updated: 2022/05/06 15:20:14 by anmande          ###   ########.fr       */
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
		//------------>ft_isdigit<------------//
		printf("%d", ft_isdigit('0'));
        printf("%d\n", isdigit('0'));
        printf("%d", ft_isdigit('1'));
        printf("%d\n", isdigit('1'));
		printf("%d", ft_isdigit('q'));
        printf("%d\n", isdigit('q'));
        printf("\n");
		//------------>ft_isdigit<-----------//
		printf("%d", ft_isalnum(""));
        printf("%d\n", ft_isalnum(""));
		printf("%d", ft_isalnum("2566"));
        printf("%d\n", ft_isalnum("2566"));
		printf("%d", ft_isalnum("-55"));
        printf("%d\n", ft_isalnum("-55"));
		printf("%d", ft_isalnum("t"));
        printf("%d\n", ft_isalnum("t"));
		printf("%d", ft_isalnum(" "));
        printf("%d\n", ft_isalnum(" "));
        return (0);
}