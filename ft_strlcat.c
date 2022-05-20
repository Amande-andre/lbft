/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:46:45 by anmande           #+#    #+#             */
/*   Updated: 2022/05/20 12:26:51 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;
	size_t	len_src;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	i = 0;
	j = 0;
	while (dst[i])
		i++;
	if (size <= len_dst || size == 0)
		return (len_src + size);
	if (size > (len_dst + len_src))
		size = len_dst + len_src + 1;
	while (j < (size - len_dst - 1))
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (len_dst + len_src);
}
