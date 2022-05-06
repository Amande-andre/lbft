/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:00:28 by anmande           #+#    #+#             */
/*   Updated: 2022/05/06 16:40:39 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "libft.h"

int     main()
{
        printf("%d ", ft_isalpha(1));
        printf("%d \n", isalpha(1));
		printf("%d ", ft_isalpha(56));
        printf("%d \n", isalpha(56));
		printf("%d ", ft_isalpha(25));
        printf("%d \n", isalpha(25));
		printf("%d ", ft_isalpha(82));
        printf("%d \n", isalpha(82));
		printf("%d ", ft_isalpha(64));
        printf("%d \n", isalpha(64));
        printf("\n");
		//------------>ft_isdigit<------------//
		printf("%d ", ft_isdigit('0'));
        printf("%d \n", isdigit('0'));
        printf("%d ", ft_isdigit('1'));
        printf("%d \n", isdigit('1'));
		printf("%d ", ft_isdigit('q'));
        printf("%d \n", isdigit('q'));
        printf("\n");
		//------------>ft_isalnum<-----------//
		printf("%d ", ft_isalnum(0));
        printf("%d \n", isalnum(0));
		printf("%d ", ft_isalnum(2566));
        printf("%d \n", isalnum(2566));
		printf("%d ", ft_isalnum(-55));
        printf("%d \n", isalnum(-55));
		printf("%d ", ft_isalnum('u'));
        printf("%d \n", isalnum('u'));
		printf("%d ", ft_isalnum(' '));
        printf("%d \n", isalnum(' '));
		printf("\n");
		//------------>ft_isascii<-----------//

        return (0);
}