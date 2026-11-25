/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomonte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 17:17:45 by diomonte          #+#    #+#             */
/*   Updated: 2026/11/25 11:10:53 by diomonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*saved_next;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		saved_next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = saved_next;
	}
}
