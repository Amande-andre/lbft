/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:00:28 by anmande           #+#    #+#             */
/*   Updated: 2022/05/07 13:26:03 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "libft.h"

int     main()
{
    /*    printf("%d ", ft_isalpha(1));
        printf("%d \n", isalpha(1));
		printf("%d ", ft_isalpha(56));
        printf("%d \n", isalpha(56));
		printf("%d ", ft_isalpha(25));
        printf("%d \n", isalpha(25));
		printf("%d ", ft_isalpha(82));
        printf("%d \n", isalpha(82));
		printf("%d ", ft_isalpha(64));
        printf("%d \n", isalpha(64));
		printf("%d ", ft_isalpha(-1));
        printf("%d \n", isalpha(-1));
        printf("\n");
		//------------>ft_isdigit<------------//
		printf("%d ", ft_isdigit('0'));
        printf("%d \n", isdigit('0'));
        printf("%d ", ft_isdigit('1'));
        printf("%d \n", isdigit('1'));
		printf("%d ", ft_isdigit('q'));
        printf("%d \n", isdigit('q'));
		printf("%d ", ft_isdigit(-1));
        printf("%d \n", isdigit(-1));
        printf("\n");
		//------------>ft_isalnum<-----------//
		printf("%d ", ft_isalnum(0));
        printf("%d \n", isalnum(0));
		printf("%d ", ft_isalnum(2566));
        printf("%d \n", isalnum(2566));
		printf("%d ", ft_isalnum(-1));
        printf("%d \n", isalnum(-1));
		printf("%d ", ft_isalnum('u'));
        printf("%d \n", isalnum('u'));
		printf("%d ", ft_isalnum(' '));
        printf("%d \n", isalnum(' '));
		printf("\n");
		//------------>ft_isascii<-----------//
		printf("%d ", ft_isascii(0));
		printf("%d\n", isascii(0));
		printf("%d ", ft_isascii(-1));
		printf("%d\n", isascii(-1));
		printf("%d ", ft_isascii(125));
		printf("%d\n", isascii(125));
		printf("%d ", ft_isascii(127));
		printf("%d\n", isascii(127));
		printf("%d ", ft_isascii(128));
		printf("%d\n", isascii(128));
		//------------>ft_print<-----------//
	*/int print = 0;
	while (print < 150)
	{
		printf("%d ", ft_isprint(print));
		printf("%d ", isprint(print));
		printf("%d\n", print);
		print++;
	}
	

		//------------------------------------------------------------------//
		//------------------------------------------------------------------//
		printf("%d ", ft_strlen("1023456789"));
		printf("%d\n", strlen("1023456789"));
		printf("%d ", ft_strlen(""));
		printf("%d\n", strlen(""));
		printf("%d ", ft_strlen("ceci est une test \n pour voir"));
		printf("%d\n", strlen("ceci est un test \n pour voir"));
		
		return (0);
}