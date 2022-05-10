/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 16:02:39 by anmande           #+#    #+#             */
/*   Updated: 2022/05/10 10:18:17 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	char			*p;

	i = 0;
	p = s;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (s);
}

/*
int main()
{
			printf("\nft_memset\n");
	char tmpmemset[11] = "1234567890";
	char *strmemset = strdup(tmpmemset);
	char *imemset = ft_memset(strmemset, 'p', 1);
	char *i2memset = memset(tmpmemset, 'p', 1);
	printf("%s\n%s\n", imemset, i2memset);
}
*/