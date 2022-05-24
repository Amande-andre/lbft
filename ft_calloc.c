/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:37:06 by anmande           #+#    #+#             */
/*   Updated: 2022/05/24 12:58:59 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*s;

	if (nmemb >= __UINT32_MAX__)
		return (NULL);
	s = (void *)malloc(sizeof(void) * (nmemb * size));
	if (!s)
		return (NULL);
	ft_bzero(s, nmemb * size);
	return (s);

}
