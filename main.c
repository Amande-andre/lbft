/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:00:28 by anmande           #+#    #+#             */
/*   Updated: 2022/05/09 16:24:36 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"
#include <stddef.h>
#include <stdint.h>

int     main()
{
        /*
		printf("\nft_isalpha\n");
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
		printf("%d ", ft_isalpha(-1));
        printf("%d \n", isalpha(-1));
		//------------>ft_isdigit<------------//
		printf("\nft_isdigit\n");
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
		printf("\nft_isalnum\n");
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
		//------------>ft_isascii<-----------//
		printf("\nft_isascii\n");
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
		//------------>ft_isprint<-----------//
		printf("\nft_isprint\n");
	int print = 0;
	while (print < 150)
	{
		printf("%d ", ft_isprint(print));
		printf("%d ", isprint(print));
		printf("%d\n", print);
		print++;
	}	
		//------------------------------------------------------------------//
		//------------------------------------------------------------------//
		
		//------------>ft_strlen<-----------//
		printf("\nft_strl\n");
		printf("%zu ", ft_strlen("1023456789"));
		printf("%zu\n", strlen("1023456789"));
		printf("%lu ", ft_strlen(""));
		printf("%lu\n", strlen(""));
		printf("%zu ", ft_strlen("ceci est un test \n pour voir"));
		printf("%zu\n", strlen("ceci est un test \n pour voir"));
		//------------>ft_memset<-----------//

		printf("\nft_memset\n");
	char tmpmemset[11] = "1234567890";
	char *strmemset = strdup(tmpmemset);
	char *imemset = ft_memset(strmemset, 'p', 1);
	char *i2memset = memset(tmpmemset, 'p', 1);
	printf("%s\n%s\n", imemset, i2memset);

		//------------>ft_bzero<-----------//
	printf("\nft_bzero\n");
	char tmpbz[11] = "0123456789";
	char *ibz = strdup(tmpbz);
	char *i2bz = strdup(tmpbz);
	ft_bzero(ibz, 5);
	bzero(i2bz, 5);
	printf("%s\n%s\n", ibz, i2bz);
		//------------>ft_memmove<-----------//
	char	dest[] = "ofhf";
	char	src[] = "0123456789";
	size_t	size = sizeof (int);
	char *tmp = strdup(dest);
	char *tmp2 = strdup(dest);
	char *i = ft_memmove(tmp, src, 10);
	char *i2 = memmove(tmp2, src, 10);
//	ft_memmove(i, src, 5);
//	memmove(i2, src, 5);
	printf("%s\n%s\n", i, i2);

	char	dest[] = "qwertyuiop";
	char	src[] = "0123456789";
	size_t	size = sizeof (int);
	char *tmp = strdup(dest);
	char *tmp2 = strdup(dest);
	char *i = ft_memcpy(tmp, src, 5);
	char *i2 = memcpy(tmp2, src, 5);
	printf("%s\n%s\n", i, i2);
	free (tmp);
	free (tmp2);


*/
		
		return (0);
}