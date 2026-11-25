/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomonte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 19:58:26 by diomonte          #+#    #+#             */
/*   Updated: 2026/11/25 11:18:20 by diomonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*s_join;	
	size_t	len1;
	size_t	len2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	s_join = malloc(len1 + len2 + 1);
	if (s_join == NULL)
		return (NULL);
	ft_memcpy(s_join, s1, len1);
	ft_memcpy(s_join + len1, s2, len2 + 1);
	return (s_join);
}
