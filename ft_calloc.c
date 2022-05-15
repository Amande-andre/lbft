/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:37:06 by anmande           #+#    #+#             */
/*   Updated: 2022/05/15 15:21:58 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*s;
	size_t	len;
	size_t	i;

	i = 0;
	len = nmemb * size + 1;
	s = malloc (len);
	if (s == NULL)
		return (NULL);
	ft_bzero(s, size);
	return (s);
}
