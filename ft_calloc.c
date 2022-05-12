/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:37:06 by anmande           #+#    #+#             */
/*   Updated: 2022/05/12 18:22:47 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.a"
#include <stdlib.h>
#include <stddef.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*s;
	size_t	len;

	len = nmemb * size + 1;
	if((s = malloc (len)) == NULL)
		return(NULL);
	ft_bzero(s, size);
	s[size + 1] = '\0';
	return ((void)s);
}
