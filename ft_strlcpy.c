/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:23:44 by anmande           #+#    #+#             */
/*   Updated: 2022/05/16 17:45:18 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	ft_memcpy(dst, src, size);
	return (ft_strlen(src));
}

/*
int	main()
{
	char *dest = "cecieest ine teste";
	printf("%zu", ft_strlcpy(dest, "juste un", 5));
}
*/