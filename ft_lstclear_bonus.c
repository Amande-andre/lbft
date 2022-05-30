/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:24:48 by anmande           #+#    #+#             */
/*   Updated: 2022/05/30 17:38:41 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	tmp;
	
	while (lst != NULL)
	{
		tmp = lst;
		ft_lstdelone(tmp, (*del)(tmp->content));
		lst = lst->next;
	}
}
