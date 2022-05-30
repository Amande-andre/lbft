/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:57:52 by anmande           #+#    #+#             */
/*   Updated: 2022/05/30 14:40:23 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *new;

	new = ft_calloc(1, sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->content = content;
	return (new);
}
